/* MIT License

Copyright (c) 2025 万顷茫然

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
// SPDX-License-Identifier: MIT

#include "file.h"
#include <QTextStream>

namespace ZYCU
{

File::File(const QString &fileName)
{
    m_file = QFile(fileName);
    m_file.open(QIODevice::ReadWrite | QIODevice::Text);
    if (!m_file.isOpen())
    {
        // TODO: Add error emittion
        // m_status.addError(...);
        return;
    }
    QTextStream stream(&m_file);
    // By default, QStringConverter::Utf8 is used, and automatic unicode detection is enabled on Qt 6.
#if (QT_VERSION < QT_VERSION_CHECK(6,0,0))
    stream.setCodec("UTF-8");
#endif
    m_ymlTree = ryml::parse_in_arena(ryml::to_csubstr(stream.readAll().toStdString())); // immutable (csubstr) overload
}

}
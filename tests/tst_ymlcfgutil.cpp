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

#include "ZYamlConfigUtil"
#include <QTest>
#include <QString>
#include <QStringLiteral>

using namespace ZYCU;

class tst_ZYamlConfigUtil : public QObject
{
    Q_OBJECT
public:
    tst_ZYamlConfigUtil(QObject *parent = 0);
    
private slots:
    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();
    
private:
    FileMgr *fileMgr;
    GroupMgr *groupMgr;
};

tst_ZYamlConfigUtil::tst_ZYamlConfigUtil(QObject *parent) : QObject(parent)
{
}

void tst_ZYamlConfigUtil::initTestCase()
{

}

void tst_ZYamlConfigUtil::cleanupTestCase()
{
 
}

void tst_ZYamlConfigUtil::init()
{
}

void tst_ZYamlConfigUtil::cleanup()
{
}

QTEST_MAIN(tst_ZYamlConfigUtil)
#include "tst_ZYamlConfigUtil.moc"
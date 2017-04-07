#include "registerbrowser.h"
#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStandardItemModel>

int RegisterBrowser::csv_scan_file()
{
    int i = 0;
    QFile file("ma12070_register_map_rev5_full.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return i;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        i++;
    }

    return i;
}

QList<QString> RegisterBrowser::csv_read_line(int line_nr)
{
    int flag = 0;

    QFile file("ma12070_register_map_rev5_full.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        flag = 1;
    QTextStream in(&file);

    for( int i = 0; i <= line_nr; i++ )
    {
        QString line = in.readLine();

        if( i == line_nr)
        {
            int i = 0;
            int m = 0;

            QTextStream textStream(&line);
            QList<QString> line_str;
            QChar character;

            while (!textStream.atEnd())
            {
                textStream >> character;

                if( (m == 0) )
                {
                    if( (character == ',') )
                    {
                        m++;
                    }
                    else
                    {
                        line_str.append("");
                        line_str[m].append(character);
                    }
                }

                else
                {
                    if( m < 9 )
                    {
                        if (character != ',')
                        {

                            line_str.append("");
                            line_str[m].append(character);
                            m++;
                        }
                    }
                    else
                    {
                        if( m == 12 )
                        {
                            if( textStream.atEnd() )
                            {
                                line_str[m].append(character);
                                m++;
                            }
                            else
                            {
                                line_str[m].append(character);
                            }
                        }
                        if( m == 11 )
                        {
                            if( (character == ',') )
                            {
                                line_str.append("");
                                m++;
                            }
                            else
                            {
                                line_str[m].append(character);
                            }
                        }
                        if( m == 10 )
                        {
                            if( (character == ',') )
                            {
                                line_str.append("");
                                m++;
                            }
                            else
                            {
                                line_str[m].append(character);
                            }
                        }
                        if( m == 9 )
                        {
                            if( (character == ',') )
                            {
                                line_str.append("");
                                line_str.append("");
                                m++;
                            }
                            else
                            {
                                line_str[m].append(character);
                            }
                        }
                    }
                }
            }

            return line_str;
        }
    }
}




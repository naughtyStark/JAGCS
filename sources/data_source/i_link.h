#ifndef I_LINK_H
#define I_LINK_H

#include <QtCore/QObject>

namespace data_source
{
    class ILink: public QObject
    {
        Q_OBJECT

        Q_PROPERTY(bool isUp READ isUp NOTIFY upChanged)

    public:
        explicit ILink(QObject* parent = nullptr);

        virtual bool isUp() const = 0;

    public slots:
        virtual void up() = 0;
        virtual void down() = 0;

    signals:
        void upChanged(bool isUp);
    };
}

#endif // I_LINK_H

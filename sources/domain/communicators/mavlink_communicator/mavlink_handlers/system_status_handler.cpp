#include "system_status_handler.h"

// MAVLink
#include <mavlink.h>

using namespace domain;

SystemStatusHandler::SystemStatusHandler(MavLinkCommunicator* communicator):
    AbstractMavLinkHandler(communicator)
{}

void SystemStatusHandler::processMessage(const mavlink_message_t& message)
{
    if (message.msgid != MAVLINK_MSG_ID_SYS_STATUS) return;

    mavlink_sys_status_t status;
    mavlink_msg_sys_status_decode(&message, &status);

    // TODO: handle system status
}

#pragma   once

/*Modem Responses*/
constexpr auto RESP_OK = "OK";
constexpr auto RESP_ERROR = "ERROR";


/* AT Commands */
constexpr auto CMD_AT = "AT\r\n";
constexpr auto CMD_ATE_OFF = "ATE0\r\n";
constexpr auto CMD_ATE_ON = "ATE1\r\n";
constexpr auto CMD_CGMI = "AT+CGMI\r\n";
constexpr auto CMD_CGMM = "AT+CGMM\r\n";
constexpr auto CMD_CGMR = "AT+CGMR\r\n";
constexpr auto CMD_CGSN = "AT+CGSN\r\n";

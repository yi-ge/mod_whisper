#ifndef __WEBSOCK_GLUE_H__
#define __WEBSOCK_GLUE_H__

switch_status_t ws_send_text(kws_t *websocket, char *text) ;
switch_status_t ws_send_json(kws_t *websocket, ks_json_t *json_object) ;
switch_status_t whisper_get_final_transcription(whisper_t *context);
switch_status_t whisper_get_speech_synthesis(whisper_tts_t *context);

#endif

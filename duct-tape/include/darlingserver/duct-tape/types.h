#ifndef _DARLINGSERVER_DUCT_TAPE_TYPES_H_
#define _DARLINGSERVER_DUCT_TAPE_TYPES_H_

typedef struct dtape_thread dtape_thread_t;
typedef struct dtape_task dtape_task_t;
typedef struct dtape_kqchan_mach_port dtape_kqchan_mach_port_t;
typedef struct dtape_semaphore dtape_semaphore_t;

typedef enum dtape_log_level {
	dtape_log_level_debug,
	dtape_log_level_info,
	dtape_log_level_warning,
	dtape_log_level_error,
} dtape_log_level_t;

typedef enum dtape_semaphore_wait_result {
	dtape_semaphore_wait_result_error = -1,
	dtape_semaphore_wait_result_ok = 0,
	dtape_semaphore_wait_result_interrupted = 1,
} dtape_semaphore_wait_result_t;

#endif // _DARLINGSERVER_DUCT_TAPE_TYPES_H_
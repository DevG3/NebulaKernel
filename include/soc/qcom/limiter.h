#define MSM_LIMITER			"msm_limiter"
#define LIMITER_ENABLED		1
#define MPD_ENABLED			0
// #define DEFAULT_SUSPEND_FREQUENCY	998400
#define DEFAULT_SUSPEND_FREQUENCY	1728000
#define DEFAULT_RESUME_FREQUENCY	2457600
#define DEFAULT_MIN_FREQUENCY		300000

static struct cpu_limit {
	unsigned int limiter_enabled;
	unsigned int mpd_enabled;
	uint32_t suspend_max_freq;
	uint32_t resume_max_freq_all;
	uint32_t resume_max_freq[4];
	uint32_t suspend_min_freq_all;
	uint32_t suspend_min_freq[4];
	struct mutex msm_limiter_mutex[4];
	struct notifier_block notif;
} limit = {
	.limiter_enabled = LIMITER_ENABLED,
	.mpd_enabled = MPD_ENABLED,
	.suspend_max_freq = DEFAULT_SUSPEND_FREQUENCY,
	.resume_max_freq_all = DEFAULT_RESUME_FREQUENCY,
	.resume_max_freq[0] = DEFAULT_RESUME_FREQUENCY,
	.resume_max_freq[1] = DEFAULT_RESUME_FREQUENCY,
	.resume_max_freq[2] = DEFAULT_RESUME_FREQUENCY,
	.resume_max_freq[3] = DEFAULT_RESUME_FREQUENCY,
	.suspend_min_freq_all = DEFAULT_MIN_FREQUENCY,
	.suspend_min_freq[0] = DEFAULT_MIN_FREQUENCY,
	.suspend_min_freq[1] = DEFAULT_MIN_FREQUENCY,
	.suspend_min_freq[2] = DEFAULT_MIN_FREQUENCY,
	.suspend_min_freq[3] = DEFAULT_MIN_FREQUENCY,
};

cmd_kernel/trace/built-in.a := rm -f kernel/trace/built-in.a; arm-linux-gnueabihf-ar rcSTPD kernel/trace/built-in.a kernel/trace/trace_clock.o kernel/trace/ftrace.o kernel/trace/ring_buffer.o kernel/trace/trace.o kernel/trace/trace_output.o kernel/trace/trace_seq.o kernel/trace/trace_stat.o kernel/trace/trace_printk.o kernel/trace/trace_sched_switch.o kernel/trace/trace_functions.o kernel/trace/trace_preemptirq.o kernel/trace/trace_irqsoff.o kernel/trace/trace_sched_wakeup.o kernel/trace/trace_nop.o kernel/trace/trace_stack.o kernel/trace/trace_functions_graph.o kernel/trace/blktrace.o kernel/trace/trace_events.o kernel/trace/trace_export.o kernel/trace/trace_event_perf.o kernel/trace/trace_events_filter.o kernel/trace/trace_events_trigger.o kernel/trace/bpf_trace.o kernel/trace/trace_kprobe.o kernel/trace/power-traces.o kernel/trace/rpm-traces.o kernel/trace/trace_kdb.o kernel/trace/trace_probe.o

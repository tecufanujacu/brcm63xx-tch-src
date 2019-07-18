#ifndef RUNNER_A_CODE_ADDRESSES
#define RUNNER_A_CODE_ADDRESSES

#define runner_a_start_task_initialization_task		(0x14)
#define runner_a_initialization_task		(0x14)
#define runner_a_start_task_timer_scheduler_set		(0x450C)
#define runner_a_timer_scheduler_set		(0x450C)
#define runner_a_start_task_cpu_rx_wakeup_request		(0x3940)
#define runner_a_cpu_rx_wakeup_request		(0x3940)
#define runner_a_start_task_downstream_multicast_wakeup_request		(0x331C)
#define runner_a_downstream_multicast_wakeup_request		(0x331C)
#define runner_a_start_task_cpu_tx_wakeup_request		(0x3FE8)
#define runner_a_cpu_tx_wakeup_request		(0x3FE8)
#define runner_a_start_task_policer_budget_allocator_1st_wakeup_request		(0x45E8)
#define runner_a_policer_budget_allocator_1st_wakeup_request		(0x45E8)
#define runner_a_start_task_wan_direct_wakeup_request		(0x2AC)
#define runner_a_wan_direct_wakeup_request		(0x2AC)
#define runner_a_start_task_wan_cpu_wakeup_request		(0x5F0)
#define runner_a_wan_cpu_wakeup_request		(0x5F0)
#define runner_a_start_task_wan_normal_wakeup_request		(0x614)
#define runner_a_wan_normal_wakeup_request		(0x614)
#define runner_a_start_task_flow_cache_wakeup_request		(0x1B28)
#define runner_a_flow_cache_wakeup_request		(0x1B28)
#define runner_a_start_task_cpu_flow_cache_wakeup_request		(0x1B08)
#define runner_a_cpu_flow_cache_wakeup_request		(0x1B08)
#define runner_a_start_task_debug_routine		(0x1C4)
#define runner_a_debug_routine		(0x1C4)
#define runner_a_start_task_dhd_tx_post		(0x4C84)
#define runner_a_dhd_tx_post		(0x4C84)
#define runner_a_start_task_dhd_tx_complete_wakeup_request		(0x502C)
#define runner_a_dhd_tx_complete_wakeup_request		(0x502C)
#define runner_a_ingress_classification_key_src_ip		(0x165C)
#define runner_a_ingress_classification_key_dst_ip		(0x16A8)
#define runner_a_ingress_classification_key_ipv6_flow_label		(0x16F4)
#define runner_a_ingress_classification_key_generic_rule_1		(0x171C)
#define runner_a_ingress_classification_key_generic_rule_2		(0x1724)
#define runner_a_ingress_classification_key_outer_tpid		(0x1790)
#define runner_a_ingress_classification_key_inner_tpid		(0x179C)
#define runner_a_ingress_classification_key_src_port		(0x17B8)
#define runner_a_ingress_classification_key_dst_port		(0x17D8)
#define runner_a_ingress_classification_key_outer_vlan		(0x17F8)
#define runner_a_ingress_classification_key_inner_vlan		(0x1810)
#define runner_a_ingress_classification_key_dst_mac		(0x182C)
#define runner_a_ingress_classification_key_src_mac		(0x1834)
#define runner_a_ingress_classification_key_ether_type		(0x185C)
#define runner_a_ingress_classification_key_ip_protocol		(0x1870)
#define runner_a_ingress_classification_key_dscp		(0x1894)
#define runner_a_ingress_classification_key_ssid		(0x18B0)
#define runner_a_ingress_classification_key_ingress_port		(0x18B4)
#define runner_a_ingress_classification_key_outer_pbits		(0x18C4)
#define runner_a_ingress_classification_key_inner_pbits		(0x18DC)
#define runner_a_ingress_classification_key_number_of_vlans		(0x18F8)
#define runner_a_ingress_classification_key_layer3_protocol		(0x1908)
#define runner_a_flow_cache_update_header		(0x1CB0)
#define runner_a_vlan_command_transparent		(0x2400)
#define runner_a_vlan_command_add_outer_tag		(0x2424)
#define runner_a_vlan_command_add_always		(0x2484)
#define runner_a_vlan_command_add_3rd_tag		(0x24EC)
#define runner_a_vlan_command_add_two_tags		(0x254C)
#define runner_a_vlan_command_add_outer_tag_replace_inner_tag		(0x25BC)
#define runner_a_vlan_command_replace_outer_tag		(0x2628)
#define runner_a_vlan_command_replace_two_tags		(0x2658)
#define runner_a_vlan_command_remove_tag		(0x2694)
#define runner_a_vlan_command_remove_tag_dont_save		(0x26F0)
#define runner_a_vlan_command_remove_two_tags		(0x2740)
#define runner_a_vlan_command_remove_outer_tag_replace_inner_tag		(0x2794)
#define runner_a_vlan_command_remove_outer_tag_replace_inner_tag_copy		(0x27F4)
#define runner_a_vlan_command_remove_outer_tag_copy		(0x2854)
#define runner_a_vlan_command_replace_outer_tag_replace_inner_tag		(0x28B8)
#define runner_a_pbits_command_transparent		(0x28F4)
#define runner_a_pbits_command_outer_configured		(0x2904)
#define runner_a_pbits_command_inner_configured		(0x2920)
#define runner_a_pbits_command_dscp_copy		(0x293C)
#define runner_a_pbits_command_copy_inner_to_outer		(0x2988)
#define runner_a_pbits_command_increment_offset_copy_inner_to_outer		(0x29B0)
#define runner_a_pbits_command_remap		(0x29E0)
#define runner_a_pbits_command_decrement_offset_remap		(0x2A10)
#define runner_a_pbits_command_remap_outer_by_inner		(0x2A44)
#define runner_a_pbits_command_configured_two_tags		(0x2A84)
#define runner_a_pbits_command_dscp_copy_two_tags		(0x2AB8)
#define runner_a_global_register_update_r0		(0x44CC)
#define runner_a_global_register_update_r1		(0x44D4)
#define runner_a_global_register_update_r2		(0x44DC)
#define runner_a_global_register_update_r3		(0x44E4)
#define runner_a_global_register_update_r4		(0x44EC)
#define runner_a_global_register_update_r5		(0x44F4)
#define runner_a_global_register_update_r6		(0x44FC)
#define runner_a_global_register_update_r7		(0x4504)
#define runner_a_cpu_rx_meter_budget_allocate		(0x4588)
#define runner_a_dhd_tx_post_close_aggregation		(0x45D4)
#define runner_a_action_nat		(0x48FC)
#define runner_a_action_ttl_decrement		(0x49A4)
#define runner_a_action_policer		(0x4A20)
#define runner_a_action_gre_remark		(0x4A70)
#define runner_a_action_exception		(0x4A88)
#define runner_a_action_dscp_remarking		(0x4AB8)
#define runner_a_action_outer_pbits_remarking		(0x4B30)
#define runner_a_action_inner_pbits_remarking		(0x4BB8)
#define runner_a_action_pppoe		(0x4C40)
#define runner_a_action_default		(0x4C7C)

#endif
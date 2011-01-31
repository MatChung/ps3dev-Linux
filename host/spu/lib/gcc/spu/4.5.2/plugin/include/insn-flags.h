/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_pic (flag_pic)
#define HAVE_load_pic_offset (flag_pic)
#define HAVE__movqi (register_operand(operands[0], QImode) \
   || register_operand(operands[1], QImode))
#define HAVE__movv16qi (register_operand(operands[0], V16QImode) \
   || register_operand(operands[1], V16QImode))
#define HAVE__movhi (register_operand(operands[0], HImode) \
   || register_operand(operands[1], HImode))
#define HAVE__movv8hi (register_operand(operands[0], V8HImode) \
   || register_operand(operands[1], V8HImode))
#define HAVE__movsi (register_operand(operands[0], SImode) \
   || register_operand(operands[1], SImode))
#define HAVE__movv4si (register_operand(operands[0], V4SImode) \
   || register_operand(operands[1], V4SImode))
#define HAVE__movv2di (register_operand(operands[0], V2DImode) \
   || register_operand(operands[1], V2DImode))
#define HAVE__movsf (register_operand(operands[0], SFmode) \
   || register_operand(operands[1], SFmode))
#define HAVE__movv4sf (register_operand(operands[0], V4SFmode) \
   || register_operand(operands[1], V4SFmode))
#define HAVE__movdf (register_operand(operands[0], DFmode) \
   || register_operand(operands[1], DFmode))
#define HAVE__movv2df (register_operand(operands[0], V2DFmode) \
   || register_operand(operands[1], V2DFmode))
#define HAVE_low_si 1
#define HAVE_low_v4si 1
#define HAVE__movdi (register_operand(operands[0], DImode) \
   || register_operand(operands[1], DImode))
#define HAVE__movti (register_operand(operands[0], TImode) \
   || register_operand(operands[1], TImode))
#define HAVE__cpat 1
#define HAVE_extendqihi2 1
#define HAVE_extendhisi2 1
#define HAVE_xswd 1
#define HAVE_extendqiti2 1
#define HAVE_extendhiti2 1
#define HAVE_extendsiti2 1
#define HAVE_extendditi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_zero_extendqiti2 1
#define HAVE_zero_extendhiti2 1
#define HAVE_zero_extendsiti2 1
#define HAVE_zero_extendditi2 1
#define HAVE_truncdiqi2 1
#define HAVE_truncdihi2 1
#define HAVE_truncdisi2 1
#define HAVE_trunctiqi2 1
#define HAVE_trunctihi2 1
#define HAVE_trunctisi2 1
#define HAVE_trunctidi2 1
#define HAVE_floatsisf2 1
#define HAVE_floatv4siv4sf2 1
#define HAVE_fix_truncsfsi2 1
#define HAVE_fix_truncv4sfv4si2 1
#define HAVE_floatunssisf2 1
#define HAVE_floatunsv4siv4sf2 1
#define HAVE_fixuns_truncsfsi2 1
#define HAVE_fixuns_truncv4sfv4si2 1
#define HAVE_floatsisf2_mul 1
#define HAVE_floatv4siv4sf2_mul 1
#define HAVE_floatsisf2_div 1
#define HAVE_floatv4siv4sf2_div 1
#define HAVE_fix_truncsfsi2_mul 1
#define HAVE_fix_truncv4sfv4si2_mul 1
#define HAVE_floatunssisf2_mul 1
#define HAVE_floatunsv4siv4sf2_mul 1
#define HAVE_floatunssisf2_div 1
#define HAVE_floatunsv4siv4sf2_div 1
#define HAVE_fixuns_truncsfsi2_mul 1
#define HAVE_fixuns_truncv4sfv4si2_mul 1
#define HAVE_extendsfdf2 1
#define HAVE_truncdfsf2 1
#define HAVE_floatunsdisf2 1
#define HAVE_floatunssidf2_internal 1
#define HAVE_floatunsdidf2_internal 1
#define HAVE_addhi3 1
#define HAVE_addv8hi3 1
#define HAVE_addsi3 1
#define HAVE_addv4si3 1
#define HAVE_cg_si (operands)
#define HAVE_cg_di (operands)
#define HAVE_cg_v4si (operands)
#define HAVE_cg_v2di (operands)
#define HAVE_cgx_si (operands)
#define HAVE_cgx_di (operands)
#define HAVE_cgx_v4si (operands)
#define HAVE_cgx_v2di (operands)
#define HAVE_addx_si (operands)
#define HAVE_addx_di (operands)
#define HAVE_addx_v4si (operands)
#define HAVE_addx_v2di (operands)
#define HAVE_addti3 1
#define HAVE_addsf3 1
#define HAVE_addv4sf3 1
#define HAVE_adddf3 1
#define HAVE_addv2df3 1
#define HAVE_subhi3 1
#define HAVE_subv8hi3 1
#define HAVE_subsi3 1
#define HAVE_subv4si3 1
#define HAVE_bg_si (operands)
#define HAVE_bg_di (operands)
#define HAVE_bg_v4si (operands)
#define HAVE_bg_v2di (operands)
#define HAVE_bgx_si (operands)
#define HAVE_bgx_di (operands)
#define HAVE_bgx_v4si (operands)
#define HAVE_bgx_v2di (operands)
#define HAVE_sfx_si (operands)
#define HAVE_sfx_di (operands)
#define HAVE_sfx_v4si (operands)
#define HAVE_sfx_v2di (operands)
#define HAVE_subti3 1
#define HAVE_subsf3 1
#define HAVE_subv4sf3 1
#define HAVE_subdf3 1
#define HAVE_subv2df3 1
#define HAVE_neghi2 1
#define HAVE_negv8hi2 1
#define HAVE_negsi2 1
#define HAVE_negv4si2 1
#define HAVE__negsf2 1
#define HAVE__negv4sf2 1
#define HAVE__negdf2 1
#define HAVE__negv2df2 1
#define HAVE__abssf2 1
#define HAVE__absv4sf2 1
#define HAVE__absdf2 1
#define HAVE__absv2df2 1
#define HAVE_mulhi3 1
#define HAVE__mulsi3 1
#define HAVE__mulv4si3 1
#define HAVE_mulhisi3 1
#define HAVE_mulhisi3_imm 1
#define HAVE_umulhisi3 1
#define HAVE_umulhisi3_imm 1
#define HAVE_mpyu_si 1
#define HAVE_mpyh_si 1
#define HAVE_mpys_si 1
#define HAVE_mpyhh_si 1
#define HAVE_mpyhhu_si 1
#define HAVE_mulsf3 1
#define HAVE_mulv4sf3 1
#define HAVE_muldf3 1
#define HAVE_mulv2df3 1
#define HAVE_fma_sf 1
#define HAVE_fma_v4sf 1
#define HAVE_fnms_sf 1
#define HAVE_fnms_v4sf 1
#define HAVE_fms_sf 1
#define HAVE_fms_v4sf 1
#define HAVE_fma_df 1
#define HAVE_fma_v2df 1
#define HAVE_fnma_df 1
#define HAVE_fnma_v2df 1
#define HAVE_fnms_df 1
#define HAVE_fnms_v2df 1
#define HAVE_fms_df 1
#define HAVE_fms_v2df 1
#define HAVE_divmodsi4 1
#define HAVE_udivmodsi4 1
#define HAVE_sqrtsf2 1
#define HAVE_frest_sf 1
#define HAVE_frest_v4sf 1
#define HAVE_frsqest_sf 1
#define HAVE_frsqest_v4sf 1
#define HAVE_fi_sf 1
#define HAVE_fi_v4sf 1
#define HAVE_andqi3 1
#define HAVE_andv16qi3 1
#define HAVE_andhi3 1
#define HAVE_andv8hi3 1
#define HAVE_andsi3 1
#define HAVE_andv4si3 1
#define HAVE_andv2di3 1
#define HAVE_andsf3 1
#define HAVE_andv4sf3 1
#define HAVE_anddf3 1
#define HAVE_andv2df3 1
#define HAVE_anddi3 1
#define HAVE_andti3 1
#define HAVE_andc_qi 1
#define HAVE_andc_v16qi 1
#define HAVE_andc_hi 1
#define HAVE_andc_v8hi 1
#define HAVE_andc_si 1
#define HAVE_andc_v4si 1
#define HAVE_andc_di 1
#define HAVE_andc_v2di 1
#define HAVE_andc_ti 1
#define HAVE_andc_sf 1
#define HAVE_andc_v4sf 1
#define HAVE_andc_df 1
#define HAVE_andc_v2df 1
#define HAVE_nand_qi 1
#define HAVE_nand_v16qi 1
#define HAVE_nand_hi 1
#define HAVE_nand_v8hi 1
#define HAVE_nand_si 1
#define HAVE_nand_v4si 1
#define HAVE_nand_di 1
#define HAVE_nand_v2di 1
#define HAVE_nand_ti 1
#define HAVE_nand_sf 1
#define HAVE_nand_v4sf 1
#define HAVE_nand_df 1
#define HAVE_nand_v2df 1
#define HAVE_iorqi3 1
#define HAVE_iorv16qi3 1
#define HAVE_iorhi3 1
#define HAVE_iorv8hi3 1
#define HAVE_iorsi3 1
#define HAVE_iorv4si3 1
#define HAVE_iorv2di3 1
#define HAVE_iorsf3 1
#define HAVE_iorv4sf3 1
#define HAVE_iordf3 1
#define HAVE_iorv2df3 1
#define HAVE_iordi3 1
#define HAVE_iorti3 1
#define HAVE_orc_qi 1
#define HAVE_orc_v16qi 1
#define HAVE_orc_hi 1
#define HAVE_orc_v8hi 1
#define HAVE_orc_si 1
#define HAVE_orc_v4si 1
#define HAVE_orc_di 1
#define HAVE_orc_v2di 1
#define HAVE_orc_ti 1
#define HAVE_orc_sf 1
#define HAVE_orc_v4sf 1
#define HAVE_orc_df 1
#define HAVE_orc_v2df 1
#define HAVE_nor_qi 1
#define HAVE_nor_v16qi 1
#define HAVE_nor_hi 1
#define HAVE_nor_v8hi 1
#define HAVE_nor_si 1
#define HAVE_nor_v4si 1
#define HAVE_nor_di 1
#define HAVE_nor_v2di 1
#define HAVE_nor_ti 1
#define HAVE_nor_sf 1
#define HAVE_nor_v4sf 1
#define HAVE_nor_df 1
#define HAVE_nor_v2df 1
#define HAVE_xorqi3 1
#define HAVE_xorv16qi3 1
#define HAVE_xorhi3 1
#define HAVE_xorv8hi3 1
#define HAVE_xorsi3 1
#define HAVE_xorv4si3 1
#define HAVE_xorv2di3 1
#define HAVE_xorsf3 1
#define HAVE_xorv4sf3 1
#define HAVE_xordf3 1
#define HAVE_xorv2df3 1
#define HAVE_xordi3 1
#define HAVE_xorti3 1
#define HAVE_eqv_qi 1
#define HAVE_eqv_v16qi 1
#define HAVE_eqv_hi 1
#define HAVE_eqv_v8hi 1
#define HAVE_eqv_si 1
#define HAVE_eqv_v4si 1
#define HAVE_eqv_di 1
#define HAVE_eqv_v2di 1
#define HAVE_eqv_ti 1
#define HAVE_eqv_sf 1
#define HAVE_eqv_v4sf 1
#define HAVE_eqv_df 1
#define HAVE_eqv_v2df 1
#define HAVE_one_cmplqi2 1
#define HAVE_one_cmplv16qi2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplv8hi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplv4si2 1
#define HAVE_one_cmpldi2 1
#define HAVE_one_cmplv2di2 1
#define HAVE_one_cmplti2 1
#define HAVE_one_cmplsf2 1
#define HAVE_one_cmplv4sf2 1
#define HAVE_one_cmpldf2 1
#define HAVE_one_cmplv2df2 1
#define HAVE__selb (GET_MODE(operands[0]) == GET_MODE(operands[1])  \
   && GET_MODE(operands[1]) == GET_MODE(operands[2]))
#define HAVE_clzsi2 1
#define HAVE_clzv4si2 1
#define HAVE_cntb_si 1
#define HAVE_cntb_v16qi 1
#define HAVE_sumb_si 1
#define HAVE_ashlhi3 1
#define HAVE_vashlv8hi3 1
#define HAVE_ashlsi3 1
#define HAVE_vashlv4si3 1
#define HAVE_ashldi3 1
#define HAVE_ashlti3_imm 1
#define HAVE_ashlti3_reg 1
#define HAVE_shlqbybi_ti 1
#define HAVE_shlqbi_ti 1
#define HAVE_shlqby_ti 1
#define HAVE_lshrhi3 1
#define HAVE_vlshrv8hi3 1
#define HAVE_lshrsi3 1
#define HAVE_vlshrv4si3 1
#define HAVE_lshrhi3_imm 1
#define HAVE_vlshrv8hi3_imm 1
#define HAVE_lshrsi3_imm 1
#define HAVE_vlshrv4si3_imm 1
#define HAVE_rotm_hi 1
#define HAVE_rotm_v8hi 1
#define HAVE_rotm_si 1
#define HAVE_rotm_v4si 1
#define HAVE_lshrdi3 1
#define HAVE_lshrti3 1
#define HAVE_rotqmbybi_di 1
#define HAVE_rotqmbybi_ti 1
#define HAVE_shrqbi_di 1
#define HAVE_shrqbi_ti 1
#define HAVE_rotqmbi_di 1
#define HAVE_rotqmbi_ti 1
#define HAVE_rotqmby_di 1
#define HAVE_rotqmby_ti 1
#define HAVE_ashrhi3 1
#define HAVE_vashrv8hi3 1
#define HAVE_ashrsi3 1
#define HAVE_vashrv4si3 1
#define HAVE_ashrhi3_imm 1
#define HAVE_vashrv8hi3_imm 1
#define HAVE_ashrsi3_imm 1
#define HAVE_vashrv4si3_imm 1
#define HAVE_rotma_hi 1
#define HAVE_rotma_v8hi 1
#define HAVE_rotma_si 1
#define HAVE_rotma_v4si 1
#define HAVE_ashrdi3 1
#define HAVE_ashrti3 1
#define HAVE_fsm_ti 1
#define HAVE_rotlhi3 1
#define HAVE_vrotlv8hi3 1
#define HAVE_rotlsi3 1
#define HAVE_vrotlv4si3 1
#define HAVE_rotlti3 1
#define HAVE_rotqbybi_ti 1
#define HAVE_rotqby_ti 1
#define HAVE_rotqbi_ti 1
#define HAVE_trunc_shr_tiqi 1
#define HAVE_trunc_shr_tihi 1
#define HAVE_trunc_shr_tisi 1
#define HAVE_trunc_shr_tidi 1
#define HAVE_shl_ext_qiti 1
#define HAVE_shl_ext_hiti 1
#define HAVE_shl_ext_siti 1
#define HAVE_shl_ext_diti 1
#define HAVE_sext_trunc_lshr_tiqisi 1
#define HAVE_zext_trunc_lshr_tiqisi 1
#define HAVE_sext_trunc_lshr_tihisi 1
#define HAVE_zext_trunc_lshr_tihisi 1
#define HAVE_indirect_jump 1
#define HAVE_jump 1
#define HAVE__return 1
#define HAVE_ceq_qi 1
#define HAVE_ceq_v16qi 1
#define HAVE_ceq_hi 1
#define HAVE_ceq_v8hi 1
#define HAVE_ceq_si 1
#define HAVE_ceq_v4si 1
#define HAVE_ceq_di 1
#define HAVE_ceq_ti 1
#define HAVE_ceq_sf 1
#define HAVE_ceq_v4sf 1
#define HAVE_cmeq_sf 1
#define HAVE_cmeq_v4sf 1
#define HAVE_ceq_df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_ceq_v2df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cmeq_df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cmeq_v2df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cgt_qi 1
#define HAVE_cgt_v16qi 1
#define HAVE_cgt_hi 1
#define HAVE_cgt_v8hi 1
#define HAVE_cgt_si 1
#define HAVE_cgt_v4si 1
#define HAVE_cgt_di_m1 1
#define HAVE_cgt_di 1
#define HAVE_cgt_ti 1
#define HAVE_cgt_sf 1
#define HAVE_cgt_v4sf 1
#define HAVE_cmgt_sf 1
#define HAVE_cmgt_v4sf 1
#define HAVE_cgt_df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cgt_v2df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cmgt_df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_cmgt_v2df_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_clgt_qi 1
#define HAVE_clgt_v16qi 1
#define HAVE_clgt_hi 1
#define HAVE_clgt_v8hi 1
#define HAVE_clgt_si 1
#define HAVE_clgt_v4si 1
#define HAVE_clgt_di 1
#define HAVE_clgt_ti 1
#define HAVE_dftsv_celledp (spu_arch == PROCESSOR_CELLEDP)
#define HAVE_movcc_dummy (!operands[0])
#define HAVE_extend_compareqi (operands)
#define HAVE_extend_comparev16qi (operands)
#define HAVE_extend_comparehi (operands)
#define HAVE_extend_comparev8hi (operands)
#define HAVE_extend_comparesi (operands)
#define HAVE_extend_comparev4si (operands)
#define HAVE_extend_comparedi (operands)
#define HAVE_extend_comparev2di (operands)
#define HAVE_extend_compareti (operands)
#define HAVE_extend_comparesf (operands)
#define HAVE_extend_comparev4sf (operands)
#define HAVE_extend_comparedf (operands)
#define HAVE_extend_comparev2df (operands)
#define HAVE_tablejump 1
#define HAVE__sibcall (SIBLING_CALL_P(insn))
#define HAVE__sibcall_value (SIBLING_CALL_P(insn))
#define HAVE__call 1
#define HAVE__call_value 1
#define HAVE_blockage 1
#define HAVE__vec_extractv2di 1
#define HAVE__vec_extractv4si 1
#define HAVE__vec_extractv8hi 1
#define HAVE__vec_extractv16qi 1
#define HAVE__vec_extractv2df 1
#define HAVE__vec_extractv4sf 1
#define HAVE__vec_extractv8hi_ze 1
#define HAVE__shufb (operands)
#define HAVE_nop 1
#define HAVE_nopn 1
#define HAVE_lnop 1
#define HAVE_iprefetch 1
#define HAVE_nopn_nv 1
#define HAVE_hbr 1
#define HAVE_sync 1
#define HAVE_syncc 1
#define HAVE_dsync 1
#define HAVE__spu_convert 1
#define HAVE_spu_mpy 1
#define HAVE_spu_mpyu 1
#define HAVE_spu_mpya 1
#define HAVE_spu_mpyh 1
#define HAVE_spu_mpys 1
#define HAVE_spu_mpyhhu 1
#define HAVE_spu_mpyhh 1
#define HAVE_spu_mpyhhau 1
#define HAVE_spu_mpyhha 1
#define HAVE_spu_fsmb 1
#define HAVE_spu_fsmh 1
#define HAVE_spu_fsm 1
#define HAVE_spu_gbb 1
#define HAVE_spu_gbh 1
#define HAVE_spu_gb 1
#define HAVE_spu_avgb 1
#define HAVE_spu_absdb 1
#define HAVE_spu_sumb 1
#define HAVE_spu_xsbh 1
#define HAVE_spu_xshw 1
#define HAVE_spu_xswd 1
#define HAVE_spu_orx 1
#define HAVE_spu_heq 1
#define HAVE_spu_hgt 1
#define HAVE_spu_hlgt 1
#define HAVE_spu_bisled 1
#define HAVE_spu_bisledd 1
#define HAVE_spu_bislede 1
#define HAVE__frds 1
#define HAVE_spu_fesd 1
#define HAVE_spu_stop 1
#define HAVE_spu_stopd 1
#define HAVE_set_intr (! flag_pic)
#define HAVE_set_intr_pic (flag_pic)
#define HAVE_set_intr_cc (! flag_pic)
#define HAVE_set_intr_cc_pic (flag_pic)
#define HAVE_set_intr_return 1
#define HAVE_spu_fscrrd 1
#define HAVE_spu_fscrwr 1
#define HAVE_spu_mfspr 1
#define HAVE_spu_mtspr 1
#define HAVE_spu_rdch_noclobber 1
#define HAVE_spu_rchcnt_noclobber 1
#define HAVE_spu_wrch_noclobber 1
#define HAVE_spu_rdch_clobber 1
#define HAVE_spu_rchcnt_clobber 1
#define HAVE_spu_wrch_clobber 1
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test_si 1
#define HAVE_movqi 1
#define HAVE_movv16qi 1
#define HAVE_movhi 1
#define HAVE_movv8hi 1
#define HAVE_movsi 1
#define HAVE_movv4si 1
#define HAVE_movdi 1
#define HAVE_movv2di 1
#define HAVE_movti 1
#define HAVE_movsf 1
#define HAVE_movv4sf 1
#define HAVE_movdf 1
#define HAVE_movv2df 1
#define HAVE_cpat 1
#define HAVE_extendsidi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_floatdisf2 1
#define HAVE_floatsidf2 1
#define HAVE_floatunssidf2 1
#define HAVE_floatdidf2 1
#define HAVE_floatunsdidf2 1
#define HAVE_addv16qi3 1
#define HAVE_adddi3 1
#define HAVE_addv2di3 1
#define HAVE_subv16qi3 1
#define HAVE_subdi3 1
#define HAVE_subv2di3 1
#define HAVE_negv16qi2 1
#define HAVE_negdi2 1
#define HAVE_negti2 1
#define HAVE_negsf2 1
#define HAVE_negv4sf2 1
#define HAVE_negdf2 1
#define HAVE_negv2df2 1
#define HAVE_abssf2 1
#define HAVE_absv4sf2 1
#define HAVE_absdf2 1
#define HAVE_absv2df2 1
#define HAVE_mulv8hi3 1
#define HAVE_mulsi3 1
#define HAVE_mulv4si3 1
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart 1
#define HAVE_divsf3 1
#define HAVE_divv4sf3 1
#define HAVE_selb 1
#define HAVE_ctzsi2 1
#define HAVE_ctzv4si2 1
#define HAVE_ffssi2 1
#define HAVE_ffsv4si2 1
#define HAVE_popcountsi2 1
#define HAVE_paritysi2 1
#define HAVE_ashlti3 1
#define HAVE_shrqbybi_di 1
#define HAVE_shrqbybi_ti 1
#define HAVE_shrqby_di 1
#define HAVE_shrqby_ti 1
#define HAVE_extv 1
#define HAVE_extzv 1
#define HAVE_insv 1
#define HAVE_movstrsi 1
#define HAVE_return (direct_return())
#define HAVE_ceq_df 1
#define HAVE_ceq_v2df 1
#define HAVE_cmeq_v2df 1
#define HAVE_cgt_df 1
#define HAVE_cgt_v2df 1
#define HAVE_cmgt_v2df 1
#define HAVE_dftsv 1
#define HAVE_vcondv16qi 1
#define HAVE_vcondv8hi 1
#define HAVE_vcondv4si 1
#define HAVE_vcondv4sf 1
#define HAVE_vcondv2df 1
#define HAVE_vconduv16qi 1
#define HAVE_vconduv8hi 1
#define HAVE_vconduv4si 1
#define HAVE_cbranchqi4 1
#define HAVE_cbranchv16qi4 1
#define HAVE_cbranchhi4 1
#define HAVE_cbranchv8hi4 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchv4si4 1
#define HAVE_cbranchdi4 1
#define HAVE_cbranchti4 1
#define HAVE_cbranchsf4 1
#define HAVE_cbranchv4sf4 1
#define HAVE_cbranchdf4 1
#define HAVE_cstoreqi4 1
#define HAVE_cstorev16qi4 1
#define HAVE_cstorehi4 1
#define HAVE_cstorev8hi4 1
#define HAVE_cstoresi4 1
#define HAVE_cstorev4si4 1
#define HAVE_cstoredi4 1
#define HAVE_cstoreti4 1
#define HAVE_cstoresf4 1
#define HAVE_cstorev4sf4 1
#define HAVE_cstoredf4 1
#define HAVE_movqicc 1
#define HAVE_movv16qicc 1
#define HAVE_movhicc 1
#define HAVE_movv8hicc 1
#define HAVE_movsicc 1
#define HAVE_movv4sicc 1
#define HAVE_movdicc 1
#define HAVE_movv2dicc 1
#define HAVE_movticc 1
#define HAVE_movsfcc 1
#define HAVE_movv4sfcc 1
#define HAVE_movdfcc 1
#define HAVE_movv2dfcc 1
#define HAVE_extend_compare 1
#define HAVE_casesi 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_allocate_stack 1
#define HAVE_save_stack_function 1
#define HAVE_restore_stack_function 1
#define HAVE_restore_stack_block 1
#define HAVE_save_stack_nonlocal 1
#define HAVE_restore_stack_nonlocal 1
#define HAVE_vec_initv2di 1
#define HAVE_vec_initv4si 1
#define HAVE_vec_initv8hi 1
#define HAVE_vec_initv16qi 1
#define HAVE_vec_initv2df 1
#define HAVE_vec_initv4sf 1
#define HAVE_vec_setv2di 1
#define HAVE_vec_setv4si 1
#define HAVE_vec_setv8hi 1
#define HAVE_vec_setv16qi 1
#define HAVE_vec_setv2df 1
#define HAVE_vec_setv4sf 1
#define HAVE_vec_extractv2di 1
#define HAVE_vec_extractv4si 1
#define HAVE_vec_extractv8hi 1
#define HAVE_vec_extractv16qi 1
#define HAVE_vec_extractv2df 1
#define HAVE_vec_extractv4sf 1
#define HAVE_shufb 1
#define HAVE_doloop_end 1
#define HAVE_spu_convert 1
#define HAVE_spu_lqd 1
#define HAVE_spu_lqx 1
#define HAVE_spu_lqa 1
#define HAVE_spu_lqr 1
#define HAVE_spu_stqd 1
#define HAVE_spu_stqx 1
#define HAVE_spu_stqa 1
#define HAVE_spu_stqr 1
#define HAVE_spu_cbx 1
#define HAVE_spu_chx 1
#define HAVE_spu_cwx 1
#define HAVE_spu_cdx 1
#define HAVE_spu_ilhu 1
#define HAVE_spu_sfh 1
#define HAVE_spu_sf 1
#define HAVE_spu_sfx 1
#define HAVE_spu_bg 1
#define HAVE_spu_bgx 1
#define HAVE_spu_csflt 1
#define HAVE_spu_cflts 1
#define HAVE_spu_cuflt 1
#define HAVE_spu_cfltu 1
#define HAVE_spu_frds 1
#define HAVE_spu_idisable 1
#define HAVE_spu_ienable 1
#define HAVE_spu_rdch 1
#define HAVE_spu_rchcnt 1
#define HAVE_spu_wrch 1
#define HAVE_spu_splats 1
#define HAVE_spu_extract 1
#define HAVE_spu_insert 1
#define HAVE_spu_promote 1
#define HAVE_spu_align_hint 1
#define HAVE_smaxv4sf3 1
#define HAVE_sminv4sf3 1
#define HAVE_smaxv2df3 1
#define HAVE_sminv2df3 1
#define HAVE_vec_widen_umult_hi_v8hi 1
#define HAVE_vec_widen_umult_lo_v8hi 1
#define HAVE_vec_widen_smult_hi_v8hi 1
#define HAVE_vec_widen_smult_lo_v8hi 1
#define HAVE_vec_realign_load_qi 1
#define HAVE_vec_realign_load_v16qi 1
#define HAVE_vec_realign_load_hi 1
#define HAVE_vec_realign_load_v8hi 1
#define HAVE_vec_realign_load_si 1
#define HAVE_vec_realign_load_v4si 1
#define HAVE_vec_realign_load_di 1
#define HAVE_vec_realign_load_v2di 1
#define HAVE_vec_realign_load_ti 1
#define HAVE_vec_realign_load_sf 1
#define HAVE_vec_realign_load_v4sf 1
#define HAVE_vec_realign_load_df 1
#define HAVE_vec_realign_load_v2df 1
#define HAVE_spu_lvsr 1
#define HAVE_vec_unpacku_hi_v8hi 1
#define HAVE_vec_unpacku_lo_v8hi 1
#define HAVE_vec_unpacks_hi_v8hi 1
#define HAVE_vec_unpacks_lo_v8hi 1
#define HAVE_vec_unpacku_hi_v16qi 1
#define HAVE_vec_unpacku_lo_v16qi 1
#define HAVE_vec_unpacks_hi_v16qi 1
#define HAVE_vec_unpacks_lo_v16qi 1
#define HAVE_vec_extract_evenv4si 1
#define HAVE_vec_extract_evenv4sf 1
#define HAVE_vec_extract_evenv8hi 1
#define HAVE_vec_extract_evenv16qi 1
#define HAVE_vec_extract_oddv4si 1
#define HAVE_vec_extract_oddv4sf 1
#define HAVE_vec_extract_oddv8hi 1
#define HAVE_vec_extract_oddv16qi 1
#define HAVE_vec_interleave_highv4sf 1
#define HAVE_vec_interleave_lowv4sf 1
#define HAVE_vec_interleave_highv4si 1
#define HAVE_vec_interleave_lowv4si 1
#define HAVE_vec_interleave_highv8hi 1
#define HAVE_vec_interleave_lowv8hi 1
#define HAVE_vec_interleave_highv16qi 1
#define HAVE_vec_interleave_lowv16qi 1
#define HAVE_vec_pack_trunc_v8hi 1
#define HAVE_vec_pack_trunc_v4si 1
#define HAVE_stack_protect_test 1
extern rtx        gen_pic                       (rtx, rtx);
extern rtx        gen_load_pic_offset           (rtx, rtx);
extern rtx        gen__movqi                    (rtx, rtx);
extern rtx        gen__movv16qi                 (rtx, rtx);
extern rtx        gen__movhi                    (rtx, rtx);
extern rtx        gen__movv8hi                  (rtx, rtx);
extern rtx        gen__movsi                    (rtx, rtx);
extern rtx        gen__movv4si                  (rtx, rtx);
extern rtx        gen__movv2di                  (rtx, rtx);
extern rtx        gen__movsf                    (rtx, rtx);
extern rtx        gen__movv4sf                  (rtx, rtx);
extern rtx        gen__movdf                    (rtx, rtx);
extern rtx        gen__movv2df                  (rtx, rtx);
extern rtx        gen_low_si                    (rtx, rtx, rtx);
extern rtx        gen_low_v4si                  (rtx, rtx, rtx);
extern rtx        gen__movdi                    (rtx, rtx);
extern rtx        gen__movti                    (rtx, rtx);
extern rtx        gen__cpat                     (rtx, rtx, rtx, rtx);
extern rtx        gen_extendqihi2               (rtx, rtx);
extern rtx        gen_extendhisi2               (rtx, rtx);
extern rtx        gen_xswd                      (rtx, rtx);
extern rtx        gen_extendqiti2               (rtx, rtx);
extern rtx        gen_extendhiti2               (rtx, rtx);
extern rtx        gen_extendsiti2               (rtx, rtx);
extern rtx        gen_extendditi2               (rtx, rtx);
extern rtx        gen_zero_extendqihi2          (rtx, rtx);
extern rtx        gen_zero_extendqisi2          (rtx, rtx);
extern rtx        gen_zero_extendsidi2          (rtx, rtx);
extern rtx        gen_zero_extendqiti2          (rtx, rtx);
extern rtx        gen_zero_extendhiti2          (rtx, rtx);
extern rtx        gen_zero_extendsiti2          (rtx, rtx);
extern rtx        gen_zero_extendditi2          (rtx, rtx);
extern rtx        gen_truncdiqi2                (rtx, rtx);
extern rtx        gen_truncdihi2                (rtx, rtx);
extern rtx        gen_truncdisi2                (rtx, rtx);
extern rtx        gen_trunctiqi2                (rtx, rtx);
extern rtx        gen_trunctihi2                (rtx, rtx);
extern rtx        gen_trunctisi2                (rtx, rtx);
extern rtx        gen_trunctidi2                (rtx, rtx);
extern rtx        gen_floatsisf2                (rtx, rtx);
extern rtx        gen_floatv4siv4sf2            (rtx, rtx);
extern rtx        gen_fix_truncsfsi2            (rtx, rtx);
extern rtx        gen_fix_truncv4sfv4si2        (rtx, rtx);
extern rtx        gen_floatunssisf2             (rtx, rtx);
extern rtx        gen_floatunsv4siv4sf2         (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2         (rtx, rtx);
extern rtx        gen_fixuns_truncv4sfv4si2     (rtx, rtx);
extern rtx        gen_floatsisf2_mul            (rtx, rtx, rtx);
extern rtx        gen_floatv4siv4sf2_mul        (rtx, rtx, rtx);
extern rtx        gen_floatsisf2_div            (rtx, rtx, rtx);
extern rtx        gen_floatv4siv4sf2_div        (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfsi2_mul        (rtx, rtx, rtx);
extern rtx        gen_fix_truncv4sfv4si2_mul    (rtx, rtx, rtx);
extern rtx        gen_floatunssisf2_mul         (rtx, rtx, rtx);
extern rtx        gen_floatunsv4siv4sf2_mul     (rtx, rtx, rtx);
extern rtx        gen_floatunssisf2_div         (rtx, rtx, rtx);
extern rtx        gen_floatunsv4siv4sf2_div     (rtx, rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2_mul     (rtx, rtx, rtx);
extern rtx        gen_fixuns_truncv4sfv4si2_mul (rtx, rtx, rtx);
extern rtx        gen_extendsfdf2               (rtx, rtx);
extern rtx        gen_truncdfsf2                (rtx, rtx);
extern rtx        gen_floatunsdisf2             (rtx, rtx);
extern rtx        gen_floatunssidf2_internal    (rtx, rtx, rtx);
extern rtx        gen_floatunsdidf2_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_addhi3                    (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_addsi3                    (rtx, rtx, rtx);
extern rtx        gen_addv4si3                  (rtx, rtx, rtx);
extern rtx        gen_cg_si                     (rtx, rtx, rtx);
extern rtx        gen_cg_di                     (rtx, rtx, rtx);
extern rtx        gen_cg_v4si                   (rtx, rtx, rtx);
extern rtx        gen_cg_v2di                   (rtx, rtx, rtx);
extern rtx        gen_cgx_si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cgx_di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cgx_v4si                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cgx_v2di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_addx_si                   (rtx, rtx, rtx, rtx);
extern rtx        gen_addx_di                   (rtx, rtx, rtx, rtx);
extern rtx        gen_addx_v4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_addx_v2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_addti3                    (rtx, rtx, rtx);
extern rtx        gen_addsf3                    (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_adddf3                    (rtx, rtx, rtx);
extern rtx        gen_addv2df3                  (rtx, rtx, rtx);
extern rtx        gen_subhi3                    (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_subsi3                    (rtx, rtx, rtx);
extern rtx        gen_subv4si3                  (rtx, rtx, rtx);
extern rtx        gen_bg_si                     (rtx, rtx, rtx);
extern rtx        gen_bg_di                     (rtx, rtx, rtx);
extern rtx        gen_bg_v4si                   (rtx, rtx, rtx);
extern rtx        gen_bg_v2di                   (rtx, rtx, rtx);
extern rtx        gen_bgx_si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_bgx_di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_bgx_v4si                  (rtx, rtx, rtx, rtx);
extern rtx        gen_bgx_v2di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_sfx_si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sfx_di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sfx_v4si                  (rtx, rtx, rtx, rtx);
extern rtx        gen_sfx_v2di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_subti3                    (rtx, rtx, rtx);
extern rtx        gen_subsf3                    (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_subdf3                    (rtx, rtx, rtx);
extern rtx        gen_subv2df3                  (rtx, rtx, rtx);
extern rtx        gen_neghi2                    (rtx, rtx);
extern rtx        gen_negv8hi2                  (rtx, rtx);
extern rtx        gen_negsi2                    (rtx, rtx);
extern rtx        gen_negv4si2                  (rtx, rtx);
extern rtx        gen__negsf2                   (rtx, rtx, rtx);
extern rtx        gen__negv4sf2                 (rtx, rtx, rtx);
extern rtx        gen__negdf2                   (rtx, rtx, rtx);
extern rtx        gen__negv2df2                 (rtx, rtx, rtx);
extern rtx        gen__abssf2                   (rtx, rtx, rtx);
extern rtx        gen__absv4sf2                 (rtx, rtx, rtx);
extern rtx        gen__absdf2                   (rtx, rtx, rtx);
extern rtx        gen__absv2df2                 (rtx, rtx, rtx);
extern rtx        gen_mulhi3                    (rtx, rtx, rtx);
extern rtx        gen__mulsi3                   (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen__mulv4si3                 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulhisi3                  (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_imm              (rtx, rtx, rtx);
extern rtx        gen_umulhisi3                 (rtx, rtx, rtx);
extern rtx        gen_umulhisi3_imm             (rtx, rtx, rtx);
extern rtx        gen_mpyu_si                   (rtx, rtx, rtx);
static inline rtx gen_mpya_si                   (rtx, rtx, rtx, rtx);
static inline rtx
gen_mpya_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mpyh_si                   (rtx, rtx, rtx);
extern rtx        gen_mpys_si                   (rtx, rtx, rtx);
extern rtx        gen_mpyhh_si                  (rtx, rtx, rtx);
extern rtx        gen_mpyhhu_si                 (rtx, rtx, rtx);
static inline rtx gen_mpyhha_si                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_mpyhha_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
extern rtx        gen_mulsf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_muldf3                    (rtx, rtx, rtx);
extern rtx        gen_mulv2df3                  (rtx, rtx, rtx);
extern rtx        gen_fma_sf                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fma_v4sf                  (rtx, rtx, rtx, rtx);
extern rtx        gen_fnms_sf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnms_v4sf                 (rtx, rtx, rtx, rtx);
extern rtx        gen_fms_sf                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fms_v4sf                  (rtx, rtx, rtx, rtx);
extern rtx        gen_fma_df                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fma_v2df                  (rtx, rtx, rtx, rtx);
extern rtx        gen_fnma_df                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnma_v2df                 (rtx, rtx, rtx, rtx);
extern rtx        gen_fnms_df                   (rtx, rtx, rtx, rtx);
extern rtx        gen_fnms_v2df                 (rtx, rtx, rtx, rtx);
extern rtx        gen_fms_df                    (rtx, rtx, rtx, rtx);
extern rtx        gen_fms_v2df                  (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodsi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                   (rtx, rtx);
extern rtx        gen_frest_sf                  (rtx, rtx);
extern rtx        gen_frest_v4sf                (rtx, rtx);
extern rtx        gen_frsqest_sf                (rtx, rtx);
extern rtx        gen_frsqest_v4sf              (rtx, rtx);
extern rtx        gen_fi_sf                     (rtx, rtx, rtx);
extern rtx        gen_fi_v4sf                   (rtx, rtx, rtx);
extern rtx        gen_andqi3                    (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_andhi3                    (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_andsi3                    (rtx, rtx, rtx);
extern rtx        gen_andv4si3                  (rtx, rtx, rtx);
extern rtx        gen_andv2di3                  (rtx, rtx, rtx);
extern rtx        gen_andsf3                    (rtx, rtx, rtx);
extern rtx        gen_andv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_anddf3                    (rtx, rtx, rtx);
extern rtx        gen_andv2df3                  (rtx, rtx, rtx);
extern rtx        gen_anddi3                    (rtx, rtx, rtx);
extern rtx        gen_andti3                    (rtx, rtx, rtx);
extern rtx        gen_andc_qi                   (rtx, rtx, rtx);
extern rtx        gen_andc_v16qi                (rtx, rtx, rtx);
extern rtx        gen_andc_hi                   (rtx, rtx, rtx);
extern rtx        gen_andc_v8hi                 (rtx, rtx, rtx);
extern rtx        gen_andc_si                   (rtx, rtx, rtx);
extern rtx        gen_andc_v4si                 (rtx, rtx, rtx);
extern rtx        gen_andc_di                   (rtx, rtx, rtx);
extern rtx        gen_andc_v2di                 (rtx, rtx, rtx);
extern rtx        gen_andc_ti                   (rtx, rtx, rtx);
extern rtx        gen_andc_sf                   (rtx, rtx, rtx);
extern rtx        gen_andc_v4sf                 (rtx, rtx, rtx);
extern rtx        gen_andc_df                   (rtx, rtx, rtx);
extern rtx        gen_andc_v2df                 (rtx, rtx, rtx);
extern rtx        gen_nand_qi                   (rtx, rtx, rtx);
extern rtx        gen_nand_v16qi                (rtx, rtx, rtx);
extern rtx        gen_nand_hi                   (rtx, rtx, rtx);
extern rtx        gen_nand_v8hi                 (rtx, rtx, rtx);
extern rtx        gen_nand_si                   (rtx, rtx, rtx);
extern rtx        gen_nand_v4si                 (rtx, rtx, rtx);
extern rtx        gen_nand_di                   (rtx, rtx, rtx);
extern rtx        gen_nand_v2di                 (rtx, rtx, rtx);
extern rtx        gen_nand_ti                   (rtx, rtx, rtx);
extern rtx        gen_nand_sf                   (rtx, rtx, rtx);
extern rtx        gen_nand_v4sf                 (rtx, rtx, rtx);
extern rtx        gen_nand_df                   (rtx, rtx, rtx);
extern rtx        gen_nand_v2df                 (rtx, rtx, rtx);
extern rtx        gen_iorqi3                    (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_iorhi3                    (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_iorsi3                    (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                  (rtx, rtx, rtx);
extern rtx        gen_iorv2di3                  (rtx, rtx, rtx);
extern rtx        gen_iorsf3                    (rtx, rtx, rtx);
extern rtx        gen_iorv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_iordf3                    (rtx, rtx, rtx);
extern rtx        gen_iorv2df3                  (rtx, rtx, rtx);
extern rtx        gen_iordi3                    (rtx, rtx, rtx);
extern rtx        gen_iorti3                    (rtx, rtx, rtx);
extern rtx        gen_orc_qi                    (rtx, rtx, rtx);
extern rtx        gen_orc_v16qi                 (rtx, rtx, rtx);
extern rtx        gen_orc_hi                    (rtx, rtx, rtx);
extern rtx        gen_orc_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_orc_si                    (rtx, rtx, rtx);
extern rtx        gen_orc_v4si                  (rtx, rtx, rtx);
extern rtx        gen_orc_di                    (rtx, rtx, rtx);
extern rtx        gen_orc_v2di                  (rtx, rtx, rtx);
extern rtx        gen_orc_ti                    (rtx, rtx, rtx);
extern rtx        gen_orc_sf                    (rtx, rtx, rtx);
extern rtx        gen_orc_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_orc_df                    (rtx, rtx, rtx);
extern rtx        gen_orc_v2df                  (rtx, rtx, rtx);
extern rtx        gen_nor_qi                    (rtx, rtx, rtx);
extern rtx        gen_nor_v16qi                 (rtx, rtx, rtx);
extern rtx        gen_nor_hi                    (rtx, rtx, rtx);
extern rtx        gen_nor_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_nor_si                    (rtx, rtx, rtx);
extern rtx        gen_nor_v4si                  (rtx, rtx, rtx);
extern rtx        gen_nor_di                    (rtx, rtx, rtx);
extern rtx        gen_nor_v2di                  (rtx, rtx, rtx);
extern rtx        gen_nor_ti                    (rtx, rtx, rtx);
extern rtx        gen_nor_sf                    (rtx, rtx, rtx);
extern rtx        gen_nor_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_nor_df                    (rtx, rtx, rtx);
extern rtx        gen_nor_v2df                  (rtx, rtx, rtx);
extern rtx        gen_xorqi3                    (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_xorhi3                    (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_xorsi3                    (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                  (rtx, rtx, rtx);
extern rtx        gen_xorv2di3                  (rtx, rtx, rtx);
extern rtx        gen_xorsf3                    (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_xordf3                    (rtx, rtx, rtx);
extern rtx        gen_xorv2df3                  (rtx, rtx, rtx);
extern rtx        gen_xordi3                    (rtx, rtx, rtx);
extern rtx        gen_xorti3                    (rtx, rtx, rtx);
extern rtx        gen_eqv_qi                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v16qi                 (rtx, rtx, rtx);
extern rtx        gen_eqv_hi                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_eqv_si                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v4si                  (rtx, rtx, rtx);
extern rtx        gen_eqv_di                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v2di                  (rtx, rtx, rtx);
extern rtx        gen_eqv_ti                    (rtx, rtx, rtx);
extern rtx        gen_eqv_sf                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_eqv_df                    (rtx, rtx, rtx);
extern rtx        gen_eqv_v2df                  (rtx, rtx, rtx);
extern rtx        gen_one_cmplqi2               (rtx, rtx);
extern rtx        gen_one_cmplv16qi2            (rtx, rtx);
extern rtx        gen_one_cmplhi2               (rtx, rtx);
extern rtx        gen_one_cmplv8hi2             (rtx, rtx);
extern rtx        gen_one_cmplsi2               (rtx, rtx);
extern rtx        gen_one_cmplv4si2             (rtx, rtx);
extern rtx        gen_one_cmpldi2               (rtx, rtx);
extern rtx        gen_one_cmplv2di2             (rtx, rtx);
extern rtx        gen_one_cmplti2               (rtx, rtx);
extern rtx        gen_one_cmplsf2               (rtx, rtx);
extern rtx        gen_one_cmplv4sf2             (rtx, rtx);
extern rtx        gen_one_cmpldf2               (rtx, rtx);
extern rtx        gen_one_cmplv2df2             (rtx, rtx);
extern rtx        gen__selb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_clzsi2                    (rtx, rtx);
extern rtx        gen_clzv4si2                  (rtx, rtx);
extern rtx        gen_cntb_si                   (rtx, rtx);
extern rtx        gen_cntb_v16qi                (rtx, rtx);
extern rtx        gen_sumb_si                   (rtx, rtx);
extern rtx        gen_ashlhi3                   (rtx, rtx, rtx);
extern rtx        gen_vashlv8hi3                (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                   (rtx, rtx, rtx);
extern rtx        gen_vashlv4si3                (rtx, rtx, rtx);
extern rtx        gen_ashldi3                   (rtx, rtx, rtx);
extern rtx        gen_ashlti3_imm               (rtx, rtx, rtx);
extern rtx        gen_ashlti3_reg               (rtx, rtx, rtx, rtx);
extern rtx        gen_shlqbybi_ti               (rtx, rtx, rtx);
extern rtx        gen_shlqbi_ti                 (rtx, rtx, rtx);
extern rtx        gen_shlqby_ti                 (rtx, rtx, rtx);
extern rtx        gen_lshrhi3                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3                (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3                (rtx, rtx, rtx);
extern rtx        gen_lshrhi3_imm               (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3_imm            (rtx, rtx, rtx);
extern rtx        gen_lshrsi3_imm               (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3_imm            (rtx, rtx, rtx);
extern rtx        gen_rotm_hi                   (rtx, rtx, rtx);
extern rtx        gen_rotm_v8hi                 (rtx, rtx, rtx);
extern rtx        gen_rotm_si                   (rtx, rtx, rtx);
extern rtx        gen_rotm_v4si                 (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                   (rtx, rtx, rtx);
extern rtx        gen_lshrti3                   (rtx, rtx, rtx);
extern rtx        gen_rotqmbybi_di              (rtx, rtx, rtx);
extern rtx        gen_rotqmbybi_ti              (rtx, rtx, rtx);
extern rtx        gen_shrqbi_di                 (rtx, rtx, rtx);
extern rtx        gen_shrqbi_ti                 (rtx, rtx, rtx);
extern rtx        gen_rotqmbi_di                (rtx, rtx, rtx);
extern rtx        gen_rotqmbi_ti                (rtx, rtx, rtx);
extern rtx        gen_rotqmby_di                (rtx, rtx, rtx);
extern rtx        gen_rotqmby_ti                (rtx, rtx, rtx);
extern rtx        gen_ashrhi3                   (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3                (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                   (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3                (rtx, rtx, rtx);
extern rtx        gen_ashrhi3_imm               (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3_imm            (rtx, rtx, rtx);
extern rtx        gen_ashrsi3_imm               (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3_imm            (rtx, rtx, rtx);
extern rtx        gen_rotma_hi                  (rtx, rtx, rtx);
extern rtx        gen_rotma_v8hi                (rtx, rtx, rtx);
extern rtx        gen_rotma_si                  (rtx, rtx, rtx);
extern rtx        gen_rotma_v4si                (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                   (rtx, rtx, rtx);
extern rtx        gen_ashrti3                   (rtx, rtx, rtx);
extern rtx        gen_fsm_ti                    (rtx, rtx);
extern rtx        gen_rotlhi3                   (rtx, rtx, rtx);
extern rtx        gen_vrotlv8hi3                (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                   (rtx, rtx, rtx);
extern rtx        gen_vrotlv4si3                (rtx, rtx, rtx);
extern rtx        gen_rotlti3                   (rtx, rtx, rtx);
extern rtx        gen_rotqbybi_ti               (rtx, rtx, rtx);
extern rtx        gen_rotqby_ti                 (rtx, rtx, rtx);
extern rtx        gen_rotqbi_ti                 (rtx, rtx, rtx);
extern rtx        gen_trunc_shr_tiqi            (rtx, rtx, rtx);
extern rtx        gen_trunc_shr_tihi            (rtx, rtx, rtx);
extern rtx        gen_trunc_shr_tisi            (rtx, rtx, rtx);
extern rtx        gen_trunc_shr_tidi            (rtx, rtx, rtx);
extern rtx        gen_shl_ext_qiti              (rtx, rtx, rtx);
extern rtx        gen_shl_ext_hiti              (rtx, rtx, rtx);
extern rtx        gen_shl_ext_siti              (rtx, rtx, rtx);
extern rtx        gen_shl_ext_diti              (rtx, rtx, rtx);
extern rtx        gen_sext_trunc_lshr_tiqisi    (rtx, rtx, rtx);
extern rtx        gen_zext_trunc_lshr_tiqisi    (rtx, rtx, rtx);
extern rtx        gen_sext_trunc_lshr_tihisi    (rtx, rtx, rtx);
extern rtx        gen_zext_trunc_lshr_tihisi    (rtx, rtx, rtx);
extern rtx        gen_indirect_jump             (rtx);
extern rtx        gen_jump                      (rtx);
extern rtx        gen__return                   (void);
extern rtx        gen_ceq_qi                    (rtx, rtx, rtx);
extern rtx        gen_ceq_v16qi                 (rtx, rtx, rtx);
extern rtx        gen_ceq_hi                    (rtx, rtx, rtx);
extern rtx        gen_ceq_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_ceq_si                    (rtx, rtx, rtx);
extern rtx        gen_ceq_v4si                  (rtx, rtx, rtx);
extern rtx        gen_ceq_di                    (rtx, rtx, rtx);
extern rtx        gen_ceq_ti                    (rtx, rtx, rtx);
extern rtx        gen_ceq_sf                    (rtx, rtx, rtx);
extern rtx        gen_ceq_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_cmeq_sf                   (rtx, rtx, rtx);
extern rtx        gen_cmeq_v4sf                 (rtx, rtx, rtx);
extern rtx        gen_ceq_df_celledp            (rtx, rtx, rtx);
extern rtx        gen_ceq_v2df_celledp          (rtx, rtx, rtx);
extern rtx        gen_cmeq_df_celledp           (rtx, rtx, rtx);
extern rtx        gen_cmeq_v2df_celledp         (rtx, rtx, rtx);
extern rtx        gen_cgt_qi                    (rtx, rtx, rtx);
extern rtx        gen_cgt_v16qi                 (rtx, rtx, rtx);
extern rtx        gen_cgt_hi                    (rtx, rtx, rtx);
extern rtx        gen_cgt_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_cgt_si                    (rtx, rtx, rtx);
extern rtx        gen_cgt_v4si                  (rtx, rtx, rtx);
extern rtx        gen_cgt_di_m1                 (rtx, rtx);
extern rtx        gen_cgt_di                    (rtx, rtx, rtx);
extern rtx        gen_cgt_ti                    (rtx, rtx, rtx);
extern rtx        gen_cgt_sf                    (rtx, rtx, rtx);
extern rtx        gen_cgt_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_cmgt_sf                   (rtx, rtx, rtx);
extern rtx        gen_cmgt_v4sf                 (rtx, rtx, rtx);
extern rtx        gen_cgt_df_celledp            (rtx, rtx, rtx);
extern rtx        gen_cgt_v2df_celledp          (rtx, rtx, rtx);
extern rtx        gen_cmgt_df_celledp           (rtx, rtx, rtx);
extern rtx        gen_cmgt_v2df_celledp         (rtx, rtx, rtx);
extern rtx        gen_clgt_qi                   (rtx, rtx, rtx);
extern rtx        gen_clgt_v16qi                (rtx, rtx, rtx);
extern rtx        gen_clgt_hi                   (rtx, rtx, rtx);
extern rtx        gen_clgt_v8hi                 (rtx, rtx, rtx);
extern rtx        gen_clgt_si                   (rtx, rtx, rtx);
extern rtx        gen_clgt_v4si                 (rtx, rtx, rtx);
extern rtx        gen_clgt_di                   (rtx, rtx, rtx);
extern rtx        gen_clgt_ti                   (rtx, rtx, rtx);
extern rtx        gen_dftsv_celledp             (rtx, rtx, rtx);
extern rtx        gen_movcc_dummy               (rtx, rtx, rtx, rtx);
extern rtx        gen_extend_compareqi          (rtx, rtx);
extern rtx        gen_extend_comparev16qi       (rtx, rtx);
extern rtx        gen_extend_comparehi          (rtx, rtx);
extern rtx        gen_extend_comparev8hi        (rtx, rtx);
extern rtx        gen_extend_comparesi          (rtx, rtx);
extern rtx        gen_extend_comparev4si        (rtx, rtx);
extern rtx        gen_extend_comparedi          (rtx, rtx);
extern rtx        gen_extend_comparev2di        (rtx, rtx);
extern rtx        gen_extend_compareti          (rtx, rtx);
extern rtx        gen_extend_comparesf          (rtx, rtx);
extern rtx        gen_extend_comparev4sf        (rtx, rtx);
extern rtx        gen_extend_comparedf          (rtx, rtx);
extern rtx        gen_extend_comparev2df        (rtx, rtx);
extern rtx        gen_tablejump                 (rtx, rtx);
extern rtx        gen__sibcall                  (rtx, rtx);
extern rtx        gen__sibcall_value            (rtx, rtx, rtx);
extern rtx        gen__call                     (rtx, rtx);
extern rtx        gen__call_value               (rtx, rtx, rtx);
extern rtx        gen_blockage                  (void);
extern rtx        gen__vec_extractv2di          (rtx, rtx, rtx);
extern rtx        gen__vec_extractv4si          (rtx, rtx, rtx);
extern rtx        gen__vec_extractv8hi          (rtx, rtx, rtx);
extern rtx        gen__vec_extractv16qi         (rtx, rtx, rtx);
extern rtx        gen__vec_extractv2df          (rtx, rtx, rtx);
extern rtx        gen__vec_extractv4sf          (rtx, rtx, rtx);
extern rtx        gen__vec_extractv8hi_ze       (rtx, rtx);
extern rtx        gen__shufb                    (rtx, rtx, rtx, rtx);
extern rtx        gen_nop                       (void);
extern rtx        gen_nopn                      (rtx);
extern rtx        gen_lnop                      (void);
extern rtx        gen_iprefetch                 (rtx);
extern rtx        gen_nopn_nv                   (rtx);
extern rtx        gen_hbr                       (rtx, rtx);
extern rtx        gen_sync                      (void);
extern rtx        gen_syncc                     (void);
extern rtx        gen_dsync                     (void);
extern rtx        gen__spu_convert              (rtx, rtx);
extern rtx        gen_spu_mpy                   (rtx, rtx, rtx);
extern rtx        gen_spu_mpyu                  (rtx, rtx, rtx);
extern rtx        gen_spu_mpya                  (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_mpyh                  (rtx, rtx, rtx);
extern rtx        gen_spu_mpys                  (rtx, rtx, rtx);
extern rtx        gen_spu_mpyhhu                (rtx, rtx, rtx);
extern rtx        gen_spu_mpyhh                 (rtx, rtx, rtx);
extern rtx        gen_spu_mpyhhau               (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_mpyhha                (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_fsmb                  (rtx, rtx);
extern rtx        gen_spu_fsmh                  (rtx, rtx);
extern rtx        gen_spu_fsm                   (rtx, rtx);
extern rtx        gen_spu_gbb                   (rtx, rtx);
extern rtx        gen_spu_gbh                   (rtx, rtx);
extern rtx        gen_spu_gb                    (rtx, rtx);
extern rtx        gen_spu_avgb                  (rtx, rtx, rtx);
extern rtx        gen_spu_absdb                 (rtx, rtx, rtx);
extern rtx        gen_spu_sumb                  (rtx, rtx, rtx);
extern rtx        gen_spu_xsbh                  (rtx, rtx);
extern rtx        gen_spu_xshw                  (rtx, rtx);
extern rtx        gen_spu_xswd                  (rtx, rtx);
extern rtx        gen_spu_orx                   (rtx, rtx);
extern rtx        gen_spu_heq                   (rtx, rtx);
extern rtx        gen_spu_hgt                   (rtx, rtx);
extern rtx        gen_spu_hlgt                  (rtx, rtx);
extern rtx        gen_spu_bisled                (rtx, rtx);
extern rtx        gen_spu_bisledd               (rtx, rtx);
extern rtx        gen_spu_bislede               (rtx, rtx);
extern rtx        gen__frds                     (rtx, rtx, rtx);
extern rtx        gen_spu_fesd                  (rtx, rtx);
extern rtx        gen_spu_stop                  (rtx);
extern rtx        gen_spu_stopd                 (rtx, rtx, rtx);
extern rtx        gen_set_intr                  (rtx, rtx);
extern rtx        gen_set_intr_pic              (rtx, rtx);
extern rtx        gen_set_intr_cc               (rtx, rtx, rtx, rtx);
extern rtx        gen_set_intr_cc_pic           (rtx, rtx, rtx, rtx);
extern rtx        gen_set_intr_return           (rtx);
extern rtx        gen_spu_fscrrd                (rtx);
extern rtx        gen_spu_fscrwr                (rtx);
extern rtx        gen_spu_mfspr                 (rtx, rtx);
extern rtx        gen_spu_mtspr                 (rtx, rtx);
extern rtx        gen_spu_rdch_noclobber        (rtx, rtx);
extern rtx        gen_spu_rchcnt_noclobber      (rtx, rtx);
extern rtx        gen_spu_wrch_noclobber        (rtx, rtx);
extern rtx        gen_spu_rdch_clobber          (rtx, rtx);
extern rtx        gen_spu_rchcnt_clobber        (rtx, rtx);
extern rtx        gen_spu_wrch_clobber          (rtx, rtx);
extern rtx        gen_stack_protect_set         (rtx, rtx);
extern rtx        gen_stack_protect_test_si     (rtx, rtx, rtx);
extern rtx        gen_movqi                     (rtx, rtx);
extern rtx        gen_movv16qi                  (rtx, rtx);
extern rtx        gen_movhi                     (rtx, rtx);
extern rtx        gen_movv8hi                   (rtx, rtx);
extern rtx        gen_movsi                     (rtx, rtx);
extern rtx        gen_movv4si                   (rtx, rtx);
extern rtx        gen_movdi                     (rtx, rtx);
extern rtx        gen_movv2di                   (rtx, rtx);
extern rtx        gen_movti                     (rtx, rtx);
extern rtx        gen_movsf                     (rtx, rtx);
extern rtx        gen_movv4sf                   (rtx, rtx);
extern rtx        gen_movdf                     (rtx, rtx);
extern rtx        gen_movv2df                   (rtx, rtx);
extern rtx        gen_cpat                      (rtx, rtx, rtx, rtx);
extern rtx        gen_extendsidi2               (rtx, rtx);
extern rtx        gen_zero_extendhisi2          (rtx, rtx);
extern rtx        gen_floatdisf2                (rtx, rtx);
extern rtx        gen_floatsidf2                (rtx, rtx);
extern rtx        gen_floatunssidf2             (rtx, rtx);
extern rtx        gen_floatdidf2                (rtx, rtx);
extern rtx        gen_floatunsdidf2             (rtx, rtx);
extern rtx        gen_addv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_adddi3                    (rtx, rtx, rtx);
extern rtx        gen_addv2di3                  (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                 (rtx, rtx, rtx);
extern rtx        gen_subdi3                    (rtx, rtx, rtx);
extern rtx        gen_subv2di3                  (rtx, rtx, rtx);
extern rtx        gen_negv16qi2                 (rtx, rtx);
extern rtx        gen_negdi2                    (rtx, rtx);
extern rtx        gen_negti2                    (rtx, rtx);
extern rtx        gen_negsf2                    (rtx, rtx);
extern rtx        gen_negv4sf2                  (rtx, rtx);
extern rtx        gen_negdf2                    (rtx, rtx);
extern rtx        gen_negv2df2                  (rtx, rtx);
extern rtx        gen_abssf2                    (rtx, rtx);
extern rtx        gen_absv4sf2                  (rtx, rtx);
extern rtx        gen_absdf2                    (rtx, rtx);
extern rtx        gen_absv2df2                  (rtx, rtx);
extern rtx        gen_mulv8hi3                  (rtx, rtx, rtx);
extern rtx        gen_mulsi3                    (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                  (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart          (rtx, rtx, rtx);
extern rtx        gen_divsf3                    (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_selb                      (rtx, rtx, rtx, rtx);
extern rtx        gen_ctzsi2                    (rtx, rtx);
extern rtx        gen_ctzv4si2                  (rtx, rtx);
extern rtx        gen_ffssi2                    (rtx, rtx);
extern rtx        gen_ffsv4si2                  (rtx, rtx);
extern rtx        gen_popcountsi2               (rtx, rtx);
extern rtx        gen_paritysi2                 (rtx, rtx);
extern rtx        gen_ashlti3                   (rtx, rtx, rtx);
extern rtx        gen_shrqbybi_di               (rtx, rtx, rtx);
extern rtx        gen_shrqbybi_ti               (rtx, rtx, rtx);
extern rtx        gen_shrqby_di                 (rtx, rtx, rtx);
extern rtx        gen_shrqby_ti                 (rtx, rtx, rtx);
extern rtx        gen_extv                      (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                     (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                      (rtx, rtx, rtx, rtx);
extern rtx        gen_movstrsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_return                    (void);
extern rtx        gen_ceq_df                    (rtx, rtx, rtx);
extern rtx        gen_ceq_v2df                  (rtx, rtx, rtx);
extern rtx        gen_cmeq_v2df                 (rtx, rtx, rtx);
extern rtx        gen_cgt_df                    (rtx, rtx, rtx);
extern rtx        gen_cgt_v2df                  (rtx, rtx, rtx);
extern rtx        gen_cmgt_v2df                 (rtx, rtx, rtx);
extern rtx        gen_dftsv                     (rtx, rtx, rtx);
extern rtx        gen_vcondv16qi                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hi                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4si                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sf                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2df                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qi               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hi                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4si                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchqi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv16qi4             (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv8hi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv4si4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchti4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv4sf4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoreqi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorev16qi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorehi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorev8hi4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorev4si4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoreti4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorev4sf4               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movqicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv16qicc                (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv8hicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv4sicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv2dicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movticc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv4sfcc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movv2dfcc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_extend_compare            (rtx, rtx);
extern rtx        gen_casesi                    (rtx, rtx, rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B))
extern rtx        gen_sibcall                   (rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C))
extern rtx        gen_sibcall_value             (rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B))
extern rtx        gen_call                      (rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C))
extern rtx        gen_call_value                (rtx, rtx, rtx);
extern rtx        gen_untyped_call              (rtx, rtx, rtx);
extern rtx        gen_prologue                  (void);
extern rtx        gen_epilogue                  (void);
extern rtx        gen_sibcall_epilogue          (void);
extern rtx        gen_allocate_stack            (rtx, rtx);
extern rtx        gen_save_stack_function       (rtx, rtx);
extern rtx        gen_restore_stack_function    (rtx, rtx);
extern rtx        gen_restore_stack_block       (rtx, rtx);
extern rtx        gen_save_stack_nonlocal       (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal    (rtx, rtx);
extern rtx        gen_vec_initv2di              (rtx, rtx);
extern rtx        gen_vec_initv4si              (rtx, rtx);
extern rtx        gen_vec_initv8hi              (rtx, rtx);
extern rtx        gen_vec_initv16qi             (rtx, rtx);
extern rtx        gen_vec_initv2df              (rtx, rtx);
extern rtx        gen_vec_initv4sf              (rtx, rtx);
extern rtx        gen_vec_setv2di               (rtx, rtx, rtx);
extern rtx        gen_vec_setv4si               (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi               (rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi              (rtx, rtx, rtx);
extern rtx        gen_vec_setv2df               (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf               (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2di           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4si           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2df           (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sf           (rtx, rtx, rtx);
extern rtx        gen_shufb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_doloop_end                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_spu_convert               (rtx, rtx);
extern rtx        gen_spu_lqd                   (rtx, rtx, rtx);
extern rtx        gen_spu_lqx                   (rtx, rtx, rtx);
extern rtx        gen_spu_lqa                   (rtx, rtx);
extern rtx        gen_spu_lqr                   (rtx, rtx);
extern rtx        gen_spu_stqd                  (rtx, rtx, rtx);
extern rtx        gen_spu_stqx                  (rtx, rtx, rtx);
extern rtx        gen_spu_stqa                  (rtx, rtx);
extern rtx        gen_spu_stqr                  (rtx, rtx);
extern rtx        gen_spu_cbx                   (rtx, rtx, rtx);
extern rtx        gen_spu_chx                   (rtx, rtx, rtx);
extern rtx        gen_spu_cwx                   (rtx, rtx, rtx);
extern rtx        gen_spu_cdx                   (rtx, rtx, rtx);
extern rtx        gen_spu_ilhu                  (rtx, rtx);
extern rtx        gen_spu_sfh                   (rtx, rtx, rtx);
extern rtx        gen_spu_sf                    (rtx, rtx, rtx);
extern rtx        gen_spu_sfx                   (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_bg                    (rtx, rtx, rtx);
extern rtx        gen_spu_bgx                   (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_csflt                 (rtx, rtx, rtx);
extern rtx        gen_spu_cflts                 (rtx, rtx, rtx);
extern rtx        gen_spu_cuflt                 (rtx, rtx, rtx);
extern rtx        gen_spu_cfltu                 (rtx, rtx, rtx);
extern rtx        gen_spu_frds                  (rtx, rtx);
extern rtx        gen_spu_idisable              (void);
extern rtx        gen_spu_ienable               (void);
extern rtx        gen_spu_rdch                  (rtx, rtx);
extern rtx        gen_spu_rchcnt                (rtx, rtx);
extern rtx        gen_spu_wrch                  (rtx, rtx);
extern rtx        gen_spu_splats                (rtx, rtx);
extern rtx        gen_spu_extract               (rtx, rtx, rtx);
extern rtx        gen_spu_insert                (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_promote               (rtx, rtx, rtx);
extern rtx        gen_spu_align_hint            (rtx, rtx, rtx);
extern rtx        gen_smaxv4sf3                 (rtx, rtx, rtx);
extern rtx        gen_sminv4sf3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv2df3                 (rtx, rtx, rtx);
extern rtx        gen_sminv2df3                 (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8hi   (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8hi   (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8hi   (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8hi   (rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_qi       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v16qi    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_hi       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v8hi     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_si       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4si     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_di       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v2di     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_ti       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_sf       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4sf     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_df       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v2df     (rtx, rtx, rtx, rtx);
extern rtx        gen_spu_lvsr                  (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8hi       (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8hi       (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8hi       (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8hi       (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v16qi      (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v16qi      (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v16qi      (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v16qi      (rtx, rtx);
extern rtx        gen_vec_extract_evenv4si      (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv4sf      (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv8hi      (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv16qi     (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv4si       (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv4sf       (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv8hi       (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv16qi      (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv4sf   (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv4sf    (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv4si   (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv4si    (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv8hi   (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv8hi    (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv16qi  (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv16qi   (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v8hi       (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4si       (rtx, rtx, rtx);
extern rtx        gen_stack_protect_test        (rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */

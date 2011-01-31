/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_load_macho_picbase_si ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_load_macho_picbase_di ((DEFAULT_ABI == ABI_DARWIN) && flag_pic && TARGET_64BIT)
#define HAVE_macho_correct_pic_si (DEFAULT_ABI == ABI_DARWIN)
#define HAVE_macho_correct_pic_di (DEFAULT_ABI == ABI_DARWIN && TARGET_64BIT)
#define HAVE_extendqidi2 (TARGET_POWERPC64)
#define HAVE_extendqisi2_ppc (TARGET_POWERPC)
#define HAVE_extendqihi2_ppc (TARGET_POWERPC)
#define HAVE_dlmzb (TARGET_DLMZB)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 (TARGET_POWERPC64)
#define HAVE_abssi2_isel (TARGET_ISEL)
#define HAVE_absdi2_isel ((TARGET_ISEL) && (TARGET_POWERPC64))
#define HAVE_nabssi2_isel (TARGET_ISEL)
#define HAVE_nabsdi2_isel ((TARGET_ISEL) && (TARGET_POWERPC64))
#define HAVE_abssi2_nopower (! TARGET_POWER && ! TARGET_ISEL)
#define HAVE_clzsi2 1
#define HAVE_clzdi2 (TARGET_POWERPC64)
#define HAVE_popcntbsi2 (TARGET_POPCNTB)
#define HAVE_popcntbdi2 ((TARGET_POPCNTB) && (TARGET_POWERPC64))
#define HAVE_popcntwsi2 (TARGET_POPCNTD)
#define HAVE_popcntddi2 (TARGET_POPCNTD && TARGET_POWERPC64)
#define HAVE_bswaphi2_internal (TARGET_POWERPC)
#define HAVE_bswapdi2_32bit (!TARGET_POWERPC64 && (REG_P (operands[0]) || REG_P (operands[1])))
#define HAVE_mulsi3_no_mq 1
#define HAVE_mulh_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_mull_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_divss_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_divus_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_quoss_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_quous_call (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_andsi3_mc (rs6000_gen_cell_microcode)
#define HAVE_andsi3_nomc (!rs6000_gen_cell_microcode)
#define HAVE_andsi3_internal0_nomc (!rs6000_gen_cell_microcode)
#define HAVE_insvsi 1
#define HAVE_insvdi (TARGET_POWERPC64)
#define HAVE_extzvsi 1
#define HAVE_extzvdi (TARGET_POWERPC64)
#define HAVE_rotlsi3 1
#define HAVE_ashlsi3_no_power 1
#define HAVE_rlwinm (includes_lshift_p (operands[2], operands[3]))
#define HAVE_lshrsi3_no_power 1
#define HAVE_ashrsi3_no_power 1
#define HAVE_aux_truncdfsf2 (! TARGET_POWERPC && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_fres (TARGET_PPC_GFXOPT && flag_finite_math_only)
#define HAVE_isel_signed_si (TARGET_ISEL)
#define HAVE_isel_signed_di ((TARGET_ISEL64) && (TARGET_POWERPC64))
#define HAVE_isel_unsigned_si (TARGET_ISEL)
#define HAVE_isel_unsigned_di ((TARGET_ISEL64) && (TARGET_POWERPC64))
#define HAVE_fix_truncdfsi2_internal_gfxopt ((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_DOUBLE_FLOAT  \
   && TARGET_PPC_GFXOPT)
#define HAVE_fix_truncdfsi2_mfpgpr (TARGET_POWERPC64 && TARGET_MFPGPR && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_DOUBLE_FLOAT)
#define HAVE_fctiwz ((TARGET_POWER2 || TARGET_POWERPC) && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_DOUBLE_FLOAT)
#define HAVE_btruncsf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
#define HAVE_ceilsf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT )
#define HAVE_floorsf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT )
#define HAVE_rounddf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_roundsf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT )
#define HAVE_stfiwx (TARGET_PPC_GFXOPT)
#define HAVE_floatdisf2_internal1 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
#define HAVE_ashrdi3_no_power (TARGET_32BIT && !TARGET_POWERPC64 && !TARGET_POWER && WORDS_BIG_ENDIAN)
#define HAVE_absdi2_internal (TARGET_POWERPC64 && !TARGET_ISEL)
#define HAVE_muldi3 (TARGET_POWERPC64)
#define HAVE_smuldi3_highpart (TARGET_POWERPC64)
#define HAVE_umuldi3_highpart (TARGET_POWERPC64)
#define HAVE_rotldi3 (TARGET_POWERPC64)
#define HAVE_ashldi3_internal5 (TARGET_64BIT && includes_rldic_lshift_p (operands[2], operands[3]))
#define HAVE_ashldi3_internal8 (TARGET_64BIT && includes_rldicr_lshift_p (operands[2], operands[3]))
#define HAVE_anddi3_mc (TARGET_POWERPC64 && rs6000_gen_cell_microcode)
#define HAVE_anddi3_nomc (TARGET_POWERPC64 && !rs6000_gen_cell_microcode)
#define HAVE_trunctfdf2_internal1 (!TARGET_IEEEQUAD && !TARGET_XL_COMPAT \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfdf2_internal2 (!TARGET_IEEEQUAD && TARGET_XL_COMPAT \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT  \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfsf2_fprs (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT  \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_fix_trunc_helper (TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_negtf2_internal (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_movdi_si_update ((TARGET_POWERPC64 && TARGET_UPDATE \
   && (!avoiding_indexed_address_p (Pmode) \
       || !gpc_reg_operand (operands[2], Pmode) \
       || (REG_P (operands[0]) \
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && (TARGET_32BIT))
#define HAVE_movdi_di_update ((TARGET_POWERPC64 && TARGET_UPDATE \
   && (!avoiding_indexed_address_p (Pmode) \
       || !gpc_reg_operand (operands[2], Pmode) \
       || (REG_P (operands[0]) \
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM))) && (TARGET_64BIT))
#define HAVE_movdi_si_update_stack ((TARGET_POWERPC64) && (TARGET_32BIT))
#define HAVE_movdi_di_update_stack ((TARGET_POWERPC64) && (TARGET_64BIT))
#define HAVE_movsi_update (TARGET_UPDATE \
   && (!avoiding_indexed_address_p (SImode) \
       || !gpc_reg_operand (operands[2], SImode) \
       || (REG_P (operands[0]) \
	   && REGNO (operands[0]) == STACK_POINTER_REGNUM)))
#define HAVE_movsi_update_stack 1
#define HAVE_tls_gd_aix32 ((HAVE_AS_TLS && DEFAULT_ABI == ABI_AIX) && (! TARGET_64BIT))
#define HAVE_tls_gd_aix64 ((HAVE_AS_TLS && DEFAULT_ABI == ABI_AIX) && (TARGET_64BIT))
#define HAVE_tls_gd_sysvsi ((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (! TARGET_64BIT))
#define HAVE_tls_gd_sysvdi ((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (TARGET_64BIT))
#define HAVE_tls_ld_aix32 ((HAVE_AS_TLS && DEFAULT_ABI == ABI_AIX) && (! TARGET_64BIT))
#define HAVE_tls_ld_aix64 ((HAVE_AS_TLS && DEFAULT_ABI == ABI_AIX) && (TARGET_64BIT))
#define HAVE_tls_ld_sysvsi ((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (! TARGET_64BIT))
#define HAVE_tls_ld_sysvdi ((HAVE_AS_TLS && DEFAULT_ABI == ABI_V4) && (TARGET_64BIT))
#define HAVE_tls_dtprel_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_dtprel_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_dtprel_ha_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_dtprel_ha_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_dtprel_lo_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_dtprel_lo_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_got_dtprel_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_got_dtprel_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_tprel_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_tprel_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_tprel_ha_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_tprel_ha_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_tprel_lo_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_tprel_lo_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_got_tprel_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_got_tprel_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_tls_tls_32 ((HAVE_AS_TLS) && (! TARGET_64BIT))
#define HAVE_tls_tls_64 ((HAVE_AS_TLS) && (TARGET_64BIT))
#define HAVE_load_toc_aix_si (DEFAULT_ABI == ABI_AIX && TARGET_32BIT)
#define HAVE_load_toc_aix_di (DEFAULT_ABI == ABI_AIX && TARGET_64BIT)
#define HAVE_load_toc_v4_pic_si (DEFAULT_ABI == ABI_V4 && flag_pic == 1 && TARGET_32BIT)
#define HAVE_load_toc_v4_PIC_1 (TARGET_ELF && DEFAULT_ABI != ABI_AIX \
   && (flag_pic == 2 || (flag_pic && TARGET_SECURE_PLT)))
#define HAVE_load_toc_v4_PIC_1b (TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2)
#define HAVE_load_toc_v4_PIC_2 (TARGET_ELF && DEFAULT_ABI != ABI_AIX && flag_pic == 2)
#define HAVE_load_toc_v4_PIC_3b (TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic)
#define HAVE_load_toc_v4_PIC_3c (TARGET_ELF && TARGET_SECURE_PLT && DEFAULT_ABI != ABI_AIX && flag_pic)
#define HAVE_elf_high (TARGET_ELF && ! TARGET_64BIT)
#define HAVE_elf_low (TARGET_ELF && ! TARGET_64BIT)
#define HAVE_blockage 1
#define HAVE_probe_stack 1
#define HAVE_stack_protect_setsi (TARGET_32BIT)
#define HAVE_stack_protect_setdi (TARGET_64BIT)
#define HAVE_stack_protect_testsi (TARGET_32BIT)
#define HAVE_stack_protect_testdi (TARGET_64BIT)
#define HAVE_move_from_CR_ov_bit (TARGET_ISEL)
#define HAVE_jump 1
#define HAVE_return (direct_return ())
#define HAVE_nop 1
#define HAVE_trap 1
#define HAVE_movesi_from_cr 1
#define HAVE_stack_tie 1
#define HAVE_frame_tie 1
#define HAVE_eh_set_lr_si (TARGET_32BIT)
#define HAVE_eh_set_lr_di (TARGET_64BIT)
#define HAVE_prefetch (TARGET_POWERPC)
#define HAVE_bpermd_si ((TARGET_POPCNTD) && (TARGET_32BIT))
#define HAVE_bpermd_di ((TARGET_POPCNTD) && (TARGET_64BIT))
#define HAVE_load_locked_si (TARGET_POWERPC)
#define HAVE_load_locked_di ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_store_conditional_si (TARGET_POWERPC)
#define HAVE_store_conditional_di ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_compare_and_swapsi (TARGET_POWERPC)
#define HAVE_sync_compare_and_swapdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_compare_and_swapqhi_internal (TARGET_POWERPC)
#define HAVE_sync_lock_test_and_setsi (TARGET_POWERPC)
#define HAVE_sync_lock_test_and_setdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_isync 1
#define HAVE_lwsync 1
#define HAVE_vsx_fredf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_frev4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_frev2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_nabsdf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_nabsv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_nabsv2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_smaxdf3 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_smaxv4sf3 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_smaxv2df3 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_rsqrtedf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_rsqrtev4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_rsqrtev2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fmadddf4_2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fmaddv4sf4_2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fmaddv2df4_2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fmsubdf4_2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fmsubv4sf4_2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fmsubv2df4_2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fnmadddf4_1 (VECTOR_UNIT_VSX_P (DFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmaddv4sf4_1 (VECTOR_UNIT_VSX_P (V4SFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmaddv2df4_1 (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmadddf4_2 (VECTOR_UNIT_VSX_P (DFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmaddv4sf4_2 (VECTOR_UNIT_VSX_P (V4SFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmaddv2df4_2 (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmadddf4_3 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fnmaddv4sf4_3 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fnmaddv2df4_3 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fnmsubdf4_1 (VECTOR_UNIT_VSX_P (DFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubv4sf4_1 (VECTOR_UNIT_VSX_P (V4SFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubv2df4_1 (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_FUSED_MADD \
   && HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubdf4_2 (VECTOR_UNIT_VSX_P (DFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubv4sf4_2 (VECTOR_UNIT_VSX_P (V4SFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubv2df4_2 (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_FUSED_MADD \
   && !HONOR_SIGNED_ZEROS (DFmode))
#define HAVE_vsx_fnmsubdf4_3 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fnmsubv4sf4_3 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fnmsubv2df4_3 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_eqv4sf (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_eqv2df (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_gtv4sf (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_gtv2df (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_copysigndf3 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_copysignv4sf3 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_copysignv2df3 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_floatdidf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_floatv4siv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_floatv2div2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_floatunsdidf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_floatunsv4siv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_floatunsv2div2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fix_truncdfdi2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fix_truncv4sfv4si2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fix_truncv2dfv2di2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fixuns_truncdfdi2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fixuns_truncv4sfv4si2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fixuns_truncv2dfv2di2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xsrdpi (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_xvrspi (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_xvrdpi (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xsrdpic (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_xvrspic (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_xvrdpic (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_btruncdf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_btruncv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_btruncv2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_floordf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_floorv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_floorv2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_ceildf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_ceilv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_ceilv2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xscvdpsp (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_xvcvspdp (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_xvcvdpsp (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xscvspdp (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_xscvdpsp_scalar (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_xvcvdpsxws (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvdpuxws (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvsxdsp (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvuxdsp (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvsxwdp (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvuxwdp (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvspsxds (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_xvcvspuxds (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_concat_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_concat_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_concat_v2sf (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_set_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_set_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_extract_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_extract_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_xxpermdi_v16qi (VECTOR_MEM_VSX_P (V16QImode))
#define HAVE_vsx_xxpermdi_v8hi (VECTOR_MEM_VSX_P (V8HImode))
#define HAVE_vsx_xxpermdi_v4si (VECTOR_MEM_VSX_P (V4SImode))
#define HAVE_vsx_xxpermdi_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_xxpermdi_v4sf (VECTOR_MEM_VSX_P (V4SFmode))
#define HAVE_vsx_xxpermdi_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_xxpermdi_ti (VECTOR_MEM_VSX_P (TImode))
#define HAVE_vsx_splat_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_splat_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_xxspltw_v4sf (VECTOR_MEM_VSX_P (V4SFmode))
#define HAVE_vsx_xxspltw_v4si (VECTOR_MEM_VSX_P (V4SImode))
#define HAVE_vsx_xxmrghw_v4sf (VECTOR_MEM_VSX_P (V4SFmode))
#define HAVE_vsx_xxmrghw_v4si (VECTOR_MEM_VSX_P (V4SImode))
#define HAVE_vsx_xxmrglw_v4sf (VECTOR_MEM_VSX_P (V4SFmode))
#define HAVE_vsx_xxmrglw_v4si (VECTOR_MEM_VSX_P (V4SImode))
#define HAVE_vsx_xxsldwi_v16qi (VECTOR_MEM_VSX_P (V16QImode))
#define HAVE_vsx_xxsldwi_v8hi (VECTOR_MEM_VSX_P (V8HImode))
#define HAVE_vsx_xxsldwi_v4si (VECTOR_MEM_VSX_P (V4SImode))
#define HAVE_vsx_xxsldwi_v2di (VECTOR_MEM_VSX_P (V2DImode))
#define HAVE_vsx_xxsldwi_v4sf (VECTOR_MEM_VSX_P (V4SFmode))
#define HAVE_vsx_xxsldwi_v2df (VECTOR_MEM_VSX_P (V2DFmode))
#define HAVE_vsx_xxsldwi_ti (VECTOR_MEM_VSX_P (TImode))
#define HAVE_get_vrsave_internal (TARGET_ALTIVEC)
#define HAVE_addv4si3 (TARGET_ALTIVEC)
#define HAVE_addv8hi3 (TARGET_ALTIVEC)
#define HAVE_addv16qi3 (TARGET_ALTIVEC)
#define HAVE_altivec_vaddcuw (TARGET_ALTIVEC)
#define HAVE_altivec_vadduws (TARGET_ALTIVEC)
#define HAVE_altivec_vadduhs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddubs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddsws (TARGET_ALTIVEC)
#define HAVE_altivec_vaddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vaddsbs (TARGET_ALTIVEC)
#define HAVE_subv4si3 (TARGET_ALTIVEC)
#define HAVE_subv8hi3 (TARGET_ALTIVEC)
#define HAVE_subv16qi3 (TARGET_ALTIVEC)
#define HAVE_altivec_vsubcuw (TARGET_ALTIVEC)
#define HAVE_altivec_vsubuws (TARGET_ALTIVEC)
#define HAVE_altivec_vsubuhs (TARGET_ALTIVEC)
#define HAVE_altivec_vsububs (TARGET_ALTIVEC)
#define HAVE_altivec_vsubsws (TARGET_ALTIVEC)
#define HAVE_altivec_vsubshs (TARGET_ALTIVEC)
#define HAVE_altivec_vsubsbs (TARGET_ALTIVEC)
#define HAVE_altivec_vavguw (TARGET_ALTIVEC)
#define HAVE_altivec_vavguh (TARGET_ALTIVEC)
#define HAVE_altivec_vavgub (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsw (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsh (TARGET_ALTIVEC)
#define HAVE_altivec_vavgsb (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpbfp (TARGET_ALTIVEC)
#define HAVE_altivec_vmaddfp (VECTOR_UNIT_ALTIVEC_P (V4SFmode))
#define HAVE_altivec_vnmsubfp (VECTOR_UNIT_ALTIVEC_P (V4SFmode))
#define HAVE_altivec_vmsumuhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumubm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsummhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsummbm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumshm (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumuhs (TARGET_ALTIVEC)
#define HAVE_altivec_vmsumshs (TARGET_ALTIVEC)
#define HAVE_umaxv4si3 (TARGET_ALTIVEC)
#define HAVE_umaxv8hi3 (TARGET_ALTIVEC)
#define HAVE_umaxv16qi3 (TARGET_ALTIVEC)
#define HAVE_smaxv4si3 (TARGET_ALTIVEC)
#define HAVE_smaxv8hi3 (TARGET_ALTIVEC)
#define HAVE_smaxv16qi3 (TARGET_ALTIVEC)
#define HAVE_uminv4si3 (TARGET_ALTIVEC)
#define HAVE_uminv8hi3 (TARGET_ALTIVEC)
#define HAVE_uminv16qi3 (TARGET_ALTIVEC)
#define HAVE_sminv4si3 (TARGET_ALTIVEC)
#define HAVE_sminv8hi3 (TARGET_ALTIVEC)
#define HAVE_sminv16qi3 (TARGET_ALTIVEC)
#define HAVE_altivec_vmhaddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vmhraddshs (TARGET_ALTIVEC)
#define HAVE_altivec_vmladduhm (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghb (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghh (TARGET_ALTIVEC)
#define HAVE_altivec_vmrghw (VECTOR_MEM_ALTIVEC_P (V4SImode))
#define HAVE_altivec_vmrglb (TARGET_ALTIVEC)
#define HAVE_altivec_vmrglh (TARGET_ALTIVEC)
#define HAVE_altivec_vmrglw (VECTOR_MEM_ALTIVEC_P (V4SImode))
#define HAVE_altivec_vmuleub (TARGET_ALTIVEC)
#define HAVE_altivec_vmulesb (TARGET_ALTIVEC)
#define HAVE_altivec_vmuleuh (TARGET_ALTIVEC)
#define HAVE_altivec_vmulesh (TARGET_ALTIVEC)
#define HAVE_altivec_vmuloub (TARGET_ALTIVEC)
#define HAVE_altivec_vmulosb (TARGET_ALTIVEC)
#define HAVE_altivec_vmulouh (TARGET_ALTIVEC)
#define HAVE_altivec_vmulosh (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuhum (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuwum (TARGET_ALTIVEC)
#define HAVE_altivec_vpkpx (TARGET_ALTIVEC)
#define HAVE_altivec_vpkshss (TARGET_ALTIVEC)
#define HAVE_altivec_vpkswss (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuhus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkshus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkuwus (TARGET_ALTIVEC)
#define HAVE_altivec_vpkswus (TARGET_ALTIVEC)
#define HAVE_altivec_vsl (TARGET_ALTIVEC)
#define HAVE_altivec_vslo (TARGET_ALTIVEC)
#define HAVE_altivec_vsr (TARGET_ALTIVEC)
#define HAVE_altivec_vsro (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4ubs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4shs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum4sbs (TARGET_ALTIVEC)
#define HAVE_altivec_vsum2sws (TARGET_ALTIVEC)
#define HAVE_altivec_vsumsws (TARGET_ALTIVEC)
#define HAVE_altivec_vspltb (TARGET_ALTIVEC)
#define HAVE_altivec_vsplth (TARGET_ALTIVEC)
#define HAVE_altivec_vspltw (TARGET_ALTIVEC)
#define HAVE_altivec_vspltsf (VECTOR_UNIT_ALTIVEC_P (V4SFmode))
#define HAVE_altivec_vspltisw (TARGET_ALTIVEC)
#define HAVE_altivec_vspltish (TARGET_ALTIVEC)
#define HAVE_altivec_vspltisb (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v2df (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v2di (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_ti (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4si_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v8hi_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v16qi_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v4sf_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v2df_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_v2di_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vperm_ti_uns (TARGET_ALTIVEC)
#define HAVE_altivec_vrfip (TARGET_ALTIVEC)
#define HAVE_altivec_vrfin (TARGET_ALTIVEC)
#define HAVE_altivec_vcfux (TARGET_ALTIVEC)
#define HAVE_altivec_vcfsx (TARGET_ALTIVEC)
#define HAVE_altivec_vctuxs (TARGET_ALTIVEC)
#define HAVE_altivec_vctsxs (TARGET_ALTIVEC)
#define HAVE_altivec_vlogefp (TARGET_ALTIVEC)
#define HAVE_altivec_vexptefp (TARGET_ALTIVEC)
#define HAVE_altivec_vrsqrtefp (TARGET_ALTIVEC)
#define HAVE_altivec_vrefp (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v16qi (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v4sf (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v2df (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_v2di (TARGET_ALTIVEC)
#define HAVE_altivec_vsldoi_ti (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhsb (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhpx (TARGET_ALTIVEC)
#define HAVE_altivec_vupkhsh (TARGET_ALTIVEC)
#define HAVE_altivec_vupklsb (TARGET_ALTIVEC)
#define HAVE_altivec_vupklpx (TARGET_ALTIVEC)
#define HAVE_altivec_vupklsh (TARGET_ALTIVEC)
#define HAVE_altivec_vcmpbfp_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_altivec_mtvscr (TARGET_ALTIVEC)
#define HAVE_altivec_mfvscr (TARGET_ALTIVEC)
#define HAVE_altivec_dssall (TARGET_ALTIVEC)
#define HAVE_altivec_dss (TARGET_ALTIVEC)
#define HAVE_altivec_dst (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dstt (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dstst (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_dststt (TARGET_ALTIVEC && GET_MODE (operands[0]) == Pmode)
#define HAVE_altivec_lvsl (TARGET_ALTIVEC)
#define HAVE_altivec_lvsr (TARGET_ALTIVEC)
#define HAVE_altivec_lvewx (TARGET_ALTIVEC)
#define HAVE_altivec_lvehx (TARGET_ALTIVEC)
#define HAVE_altivec_lvebx (TARGET_ALTIVEC)
#define HAVE_altivec_lvxl (TARGET_ALTIVEC)
#define HAVE_altivec_lvx (TARGET_ALTIVEC)
#define HAVE_altivec_stvx (TARGET_ALTIVEC)
#define HAVE_altivec_stvxl (TARGET_ALTIVEC)
#define HAVE_altivec_stvewx (TARGET_ALTIVEC)
#define HAVE_altivec_stvehx (TARGET_ALTIVEC)
#define HAVE_altivec_stvebx (TARGET_ALTIVEC)
#define HAVE_altivec_vsumsws_nomode (TARGET_ALTIVEC)
#define HAVE_vperm_v8hiv4si (TARGET_ALTIVEC)
#define HAVE_vperm_v16qiv8hi (TARGET_ALTIVEC)
#define HAVE_altivec_lvlx (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_lvlxl (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_lvrx (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_lvrxl (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_stvlx (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_stvlxl (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_stvrx (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_altivec_stvrxl (TARGET_ALTIVEC && rs6000_cpu == PROCESSOR_CELL)
#define HAVE_vpkuhum_nomode (TARGET_ALTIVEC)
#define HAVE_vpkuwum_nomode (TARGET_ALTIVEC)
#define HAVE_movsd_hardfloat ((gpc_reg_operand (operands[0], SDmode) \
   || gpc_reg_operand (operands[1], SDmode)) \
   && (TARGET_HARD_FLOAT && TARGET_FPRS))
#define HAVE_movsd_softfloat ((gpc_reg_operand (operands[0], SDmode) \
   || gpc_reg_operand (operands[1], SDmode)) \
   && (TARGET_SOFT_FLOAT || !TARGET_FPRS))
#define HAVE_movsd_store ((gpc_reg_operand (operands[0], DDmode) \
   || gpc_reg_operand (operands[1], SDmode)) \
   && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_movsd_load ((gpc_reg_operand (operands[0], SDmode) \
   || gpc_reg_operand (operands[1], DDmode)) \
   && TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_extendsddd2 (TARGET_DFP)
#define HAVE_truncddsd2 (TARGET_DFP)
#define HAVE_extendddtd2 (TARGET_DFP)
#define HAVE_trunctddd2 (TARGET_DFP)
#define HAVE_adddd3 (TARGET_DFP)
#define HAVE_addtd3 (TARGET_DFP)
#define HAVE_subdd3 (TARGET_DFP)
#define HAVE_subtd3 (TARGET_DFP)
#define HAVE_muldd3 (TARGET_DFP)
#define HAVE_multd3 (TARGET_DFP)
#define HAVE_divdd3 (TARGET_DFP)
#define HAVE_divtd3 (TARGET_DFP)
#define HAVE_floatditd2 (TARGET_DFP)
#define HAVE_ftruncdd2 (TARGET_DFP)
#define HAVE_fixdddi2 (TARGET_DFP)
#define HAVE_ftrunctd2 (TARGET_DFP)
#define HAVE_fixtddi2 (TARGET_DFP)
#define HAVE_load_macho_picbase ((DEFAULT_ABI == ABI_DARWIN) && flag_pic)
#define HAVE_macho_correct_pic (DEFAULT_ABI == ABI_DARWIN)
#define HAVE_zero_extendqidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendhidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendsidi2 (TARGET_POWERPC64)
#define HAVE_extendhidi2 (TARGET_POWERPC64)
#define HAVE_extendsidi2 (TARGET_POWERPC64)
#define HAVE_zero_extendqisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqisi2_no_power (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_zero_extendqihi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqihi2_no_power (! TARGET_POWER && ! TARGET_POWERPC)
#define HAVE_zero_extendhisi2 1
#define HAVE_extendhisi2 1
#define HAVE_strlensi (TARGET_DLMZB && WORDS_BIG_ENDIAN && !optimize_size)
#define HAVE_addsi3 1
#define HAVE_adddi3 1
#define HAVE_subsi3 1
#define HAVE_subdi3 1
#define HAVE_sminsi3 (TARGET_POWER || TARGET_ISEL)
#define HAVE_smaxsi3 (TARGET_POWER || TARGET_ISEL)
#define HAVE_uminsi3 (TARGET_POWER || TARGET_ISEL)
#define HAVE_umaxsi3 (TARGET_POWER || TARGET_ISEL)
#define HAVE_abssi2 1
#define HAVE_negsi2 1
#define HAVE_negdi2 1
#define HAVE_ctzsi2 1
#define HAVE_ctzdi2 (TARGET_POWERPC64)
#define HAVE_ffssi2 1
#define HAVE_ffsdi2 (TARGET_POWERPC64)
#define HAVE_popcountsi2 (TARGET_POPCNTB || TARGET_POPCNTD)
#define HAVE_popcountdi2 ((TARGET_POPCNTB || TARGET_POPCNTD) && (TARGET_POWERPC64))
#define HAVE_paritysi2 (TARGET_POPCNTB)
#define HAVE_paritydi2 ((TARGET_POPCNTB) && (TARGET_POWERPC64))
#define HAVE_bswaphi2 1
#define HAVE_bswapsi2 1
#define HAVE_bswapdi2 1
#define HAVE_mulsi3 1
#define HAVE_divmodsi4 (TARGET_POWER || (! TARGET_POWER && ! TARGET_POWERPC))
#define HAVE_udivsi3 1
#define HAVE_udivdi3 ((TARGET_POWERPC || (! TARGET_POWER && ! TARGET_POWERPC)) && (TARGET_POWERPC64))
#define HAVE_divsi3 1
#define HAVE_divdi3 (TARGET_POWERPC64)
#define HAVE_modsi3 1
#define HAVE_moddi3 (TARGET_POWERPC64)
#define HAVE_udivmodsi4 1
#define HAVE_andsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_insv 1
#define HAVE_extzv 1
#define HAVE_ashlsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrsi3 1
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_negsf2 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT && TARGET_SINGLE_FLOAT && !TARGET_SIMPLE_FPU)
#define HAVE_recipsf3 (TARGET_RECIP && TARGET_HARD_FLOAT && TARGET_PPC_GFXOPT && !optimize_size \
   && flag_finite_math_only && !flag_trapping_math)
#define HAVE_sqrtsf2 ((TARGET_PPC_GPOPT || TARGET_POWER2 || TARGET_XILINX_FPU) \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \
   && !TARGET_SIMPLE_FPU)
#define HAVE_rsqrtsf2 (TARGET_RECIP && TARGET_HARD_FLOAT && TARGET_PPC_GFXOPT && !optimize_size \
   && flag_finite_math_only && !flag_trapping_math)
#define HAVE_copysignsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT \
   && !HONOR_NANS (SFmode) && !HONOR_SIGNED_ZEROS (SFmode))
#define HAVE_copysigndf3 (TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT \
   && ((TARGET_PPC_GFXOPT \
        && !HONOR_NANS (DFmode) \
        && !HONOR_SIGNED_ZEROS (DFmode)) \
       || VECTOR_UNIT_VSX_P (DFmode)))
#define HAVE_smaxsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_SINGLE_FLOAT && !flag_trapping_math)
#define HAVE_sminsf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_SINGLE_FLOAT && !flag_trapping_math)
#define HAVE_movsicc (TARGET_ISEL)
#define HAVE_movdicc ((TARGET_ISEL64) && (TARGET_POWERPC64))
#define HAVE_movsfcc (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
#define HAVE_negdf2 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_absdf2 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_adddf3 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_subdf3 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_muldf3 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_divdf3 (TARGET_HARD_FLOAT \
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE) \
   && !TARGET_SIMPLE_FPU)
#define HAVE_recipdf3 (TARGET_RECIP && TARGET_HARD_FLOAT && TARGET_POPCNTB && !optimize_size \
   && flag_finite_math_only && !flag_trapping_math)
#define HAVE_fred ((TARGET_POPCNTB || VECTOR_UNIT_VSX_P (DFmode)) && flag_finite_math_only)
#define HAVE_sqrtdf2 ((TARGET_PPC_GPOPT || TARGET_POWER2) && TARGET_HARD_FLOAT && TARGET_FPRS  \
   && TARGET_DOUBLE_FLOAT)
#define HAVE_smaxdf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT  \
   && !flag_trapping_math)
#define HAVE_smindf3 (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT  \
   && !flag_trapping_math)
#define HAVE_movdfcc (TARGET_PPC_GFXOPT && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_fixuns_truncdfdi2 (TARGET_HARD_FLOAT && TARGET_VSX)
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT  \
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_floatunssidf2 (TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_fix_truncdfsi2 ((TARGET_POWER2 || TARGET_POWERPC) \
   && TARGET_HARD_FLOAT && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_btruncdf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_ceildf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_floordf2 (TARGET_FPRND && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT)
#define HAVE_ftruncdf2 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_floatdidf2 ((TARGET_POWERPC64 || TARGET_XILINX_FPU || VECTOR_UNIT_VSX_P (DFmode)) \
   && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS)
#define HAVE_floatunsdidf2 (TARGET_VSX)
#define HAVE_fix_truncdfdi2 ((TARGET_POWERPC64 || TARGET_XILINX_FPU || VECTOR_UNIT_VSX_P (DFmode)) \
    && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && TARGET_FPRS)
#define HAVE_floatdisf2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT )
#define HAVE_floatdisf2_internal2 (TARGET_POWERPC64 && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_SINGLE_FLOAT)
#define HAVE_mulsidi3 (! TARGET_POWERPC64)
#define HAVE_umulsidi3 (TARGET_POWERPC && ! TARGET_POWERPC64)
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart (TARGET_POWERPC)
#define HAVE_absdi2 (TARGET_POWERPC64)
#define HAVE_ashldi3 (TARGET_POWERPC64 || TARGET_POWER)
#define HAVE_lshrdi3 (TARGET_POWERPC64 || TARGET_POWER)
#define HAVE_ashrdi3 (WORDS_BIG_ENDIAN)
#define HAVE_anddi3 (TARGET_POWERPC64)
#define HAVE_iordi3 (TARGET_POWERPC64)
#define HAVE_xordi3 (TARGET_POWERPC64)
#define HAVE_smindi3 (TARGET_ISEL64)
#define HAVE_smaxdi3 (TARGET_ISEL64)
#define HAVE_umindi3 (TARGET_ISEL64)
#define HAVE_umaxdi3 (TARGET_ISEL64)
#define HAVE_movsi_got (DEFAULT_ABI == ABI_V4 && flag_pic == 1)
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movdi 1
#define HAVE_movti 1
#define HAVE_movcc 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movtf (!TARGET_IEEEQUAD && TARGET_LONG_DOUBLE_128)
#define HAVE_extenddftf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_extenddftf2_fprs (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT  \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_extendsftf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfdf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_trunctfsf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_floatsitf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_fix_trunctfsi2 (!TARGET_IEEEQUAD \
   && (TARGET_POWER2 || TARGET_POWERPC) \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_fix_trunctfsi2_fprs (!TARGET_IEEEQUAD \
   && (TARGET_POWER2 || TARGET_POWERPC) \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_LONG_DOUBLE_128)
#define HAVE_negtf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_abstf2 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_abstf2_internal (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT && TARGET_FPRS && TARGET_DOUBLE_FLOAT  \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_load_multiple (TARGET_STRING && !TARGET_POWERPC64)
#define HAVE_store_multiple (TARGET_STRING && !TARGET_POWERPC64)
#define HAVE_setmemsi 1
#define HAVE_movmemsi 1
#define HAVE_movmemsi_8reg (TARGET_STRING)
#define HAVE_movmemsi_6reg (TARGET_STRING)
#define HAVE_movmemsi_4reg (TARGET_STRING)
#define HAVE_movmemsi_2reg (TARGET_STRING && ! TARGET_POWERPC64)
#define HAVE_movmemsi_1reg (TARGET_STRING)
#define HAVE_allocate_stack 1
#define HAVE_save_stack_function 1
#define HAVE_restore_stack_function 1
#define HAVE_restore_stack_block 1
#define HAVE_save_stack_nonlocal 1
#define HAVE_restore_stack_nonlocal 1
#define HAVE_builtin_setjmp_receiver ((DEFAULT_ABI == ABI_V4 && flag_pic == 1) \
   || (TARGET_TOC && TARGET_MINIMAL_TOC) \
   || (DEFAULT_ABI == ABI_DARWIN && flag_pic))
#define HAVE_call_indirect_aix32 (TARGET_32BIT)
#define HAVE_call_indirect_aix64 (TARGET_64BIT)
#define HAVE_call_value_indirect_aix32 (TARGET_32BIT)
#define HAVE_call_value_indirect_aix64 (TARGET_64BIT)
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_sibcall_epilogue (TARGET_SCHED_PROLOG)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 (TARGET_POWERPC64)
#define HAVE_cbranchsf4 (TARGET_HARD_FLOAT  \
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || TARGET_E500_SINGLE))
#define HAVE_cbranchdf4 (TARGET_HARD_FLOAT  \
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_cbranchtf4 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_cbranchdd4 (TARGET_DFP)
#define HAVE_cbranchtd4 (TARGET_DFP)
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 (TARGET_POWERPC64)
#define HAVE_cstoresf4 (TARGET_HARD_FLOAT  \
   && ((TARGET_FPRS && TARGET_SINGLE_FLOAT) || TARGET_E500_SINGLE))
#define HAVE_cstoredf4 (TARGET_HARD_FLOAT  \
   && ((TARGET_FPRS && TARGET_DOUBLE_FLOAT) || TARGET_E500_DOUBLE))
#define HAVE_cstoretf4 (!TARGET_IEEEQUAD \
   && TARGET_HARD_FLOAT \
   && (TARGET_FPRS || TARGET_E500_DOUBLE) \
   && TARGET_LONG_DOUBLE_128)
#define HAVE_cstoredd4 (TARGET_DFP)
#define HAVE_cstoretd4 (TARGET_DFP)
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_tablejumpsi (TARGET_32BIT)
#define HAVE_tablejumpdi (TARGET_64BIT)
#define HAVE_doloop_end 1
#define HAVE_ctrsi (TARGET_32BIT)
#define HAVE_ctrdi (TARGET_64BIT)
#define HAVE_ctrapsi4 1
#define HAVE_ctrapdi4 (TARGET_POWERPC64)
#define HAVE_prologue (TARGET_SCHED_PROLOG)
#define HAVE_epilogue (TARGET_SCHED_PROLOG)
#define HAVE_movsi_to_cr_one 1
#define HAVE_eh_return 1
#define HAVE_memory_barrier 1
#define HAVE_sync_compare_and_swaphi (TARGET_POWERPC)
#define HAVE_sync_compare_and_swapqi (TARGET_POWERPC)
#define HAVE_sync_addqi (TARGET_POWERPC)
#define HAVE_sync_subqi (TARGET_POWERPC)
#define HAVE_sync_iorqi (TARGET_POWERPC)
#define HAVE_sync_xorqi (TARGET_POWERPC)
#define HAVE_sync_andqi (TARGET_POWERPC)
#define HAVE_sync_addhi (TARGET_POWERPC)
#define HAVE_sync_subhi (TARGET_POWERPC)
#define HAVE_sync_iorhi (TARGET_POWERPC)
#define HAVE_sync_xorhi (TARGET_POWERPC)
#define HAVE_sync_andhi (TARGET_POWERPC)
#define HAVE_sync_addsi (TARGET_POWERPC)
#define HAVE_sync_subsi (TARGET_POWERPC)
#define HAVE_sync_iorsi (TARGET_POWERPC)
#define HAVE_sync_xorsi (TARGET_POWERPC)
#define HAVE_sync_andsi (TARGET_POWERPC)
#define HAVE_sync_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_nandqi (TARGET_POWERPC)
#define HAVE_sync_nandhi (TARGET_POWERPC)
#define HAVE_sync_nandsi (TARGET_POWERPC)
#define HAVE_sync_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_addqi (TARGET_POWERPC)
#define HAVE_sync_old_subqi (TARGET_POWERPC)
#define HAVE_sync_old_iorqi (TARGET_POWERPC)
#define HAVE_sync_old_xorqi (TARGET_POWERPC)
#define HAVE_sync_old_andqi (TARGET_POWERPC)
#define HAVE_sync_old_addhi (TARGET_POWERPC)
#define HAVE_sync_old_subhi (TARGET_POWERPC)
#define HAVE_sync_old_iorhi (TARGET_POWERPC)
#define HAVE_sync_old_xorhi (TARGET_POWERPC)
#define HAVE_sync_old_andhi (TARGET_POWERPC)
#define HAVE_sync_old_addsi (TARGET_POWERPC)
#define HAVE_sync_old_subsi (TARGET_POWERPC)
#define HAVE_sync_old_iorsi (TARGET_POWERPC)
#define HAVE_sync_old_xorsi (TARGET_POWERPC)
#define HAVE_sync_old_andsi (TARGET_POWERPC)
#define HAVE_sync_old_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_old_nandqi (TARGET_POWERPC)
#define HAVE_sync_old_nandhi (TARGET_POWERPC)
#define HAVE_sync_old_nandsi (TARGET_POWERPC)
#define HAVE_sync_old_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_addqi (TARGET_POWERPC)
#define HAVE_sync_new_subqi (TARGET_POWERPC)
#define HAVE_sync_new_iorqi (TARGET_POWERPC)
#define HAVE_sync_new_xorqi (TARGET_POWERPC)
#define HAVE_sync_new_andqi (TARGET_POWERPC)
#define HAVE_sync_new_addhi (TARGET_POWERPC)
#define HAVE_sync_new_subhi (TARGET_POWERPC)
#define HAVE_sync_new_iorhi (TARGET_POWERPC)
#define HAVE_sync_new_xorhi (TARGET_POWERPC)
#define HAVE_sync_new_andhi (TARGET_POWERPC)
#define HAVE_sync_new_addsi (TARGET_POWERPC)
#define HAVE_sync_new_subsi (TARGET_POWERPC)
#define HAVE_sync_new_iorsi (TARGET_POWERPC)
#define HAVE_sync_new_xorsi (TARGET_POWERPC)
#define HAVE_sync_new_andsi (TARGET_POWERPC)
#define HAVE_sync_new_adddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_subdi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_iordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_xordi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_anddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_new_nandqi (TARGET_POWERPC)
#define HAVE_sync_new_nandhi (TARGET_POWERPC)
#define HAVE_sync_new_nandsi (TARGET_POWERPC)
#define HAVE_sync_new_nanddi ((TARGET_POWERPC) && (TARGET_POWERPC64))
#define HAVE_sync_lock_releaseqi 1
#define HAVE_sync_lock_releasehi 1
#define HAVE_sync_lock_releasesi 1
#define HAVE_sync_lock_releasedi 1
#define HAVE_sync_lock_releaseti 1
#define HAVE_movv16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_movv8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_movv4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_movv2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_movv4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_movv2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_load_v16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_load_v8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_load_v4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_load_v2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vector_load_v4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_load_v2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_store_v16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_store_v8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_store_v4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_store_v2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vector_store_v4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_store_v2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_reload_v16qi_si_store (TARGET_32BIT)
#define HAVE_reload_v8hi_si_store (TARGET_32BIT)
#define HAVE_reload_v4si_si_store (TARGET_32BIT)
#define HAVE_reload_v2di_si_store (TARGET_32BIT)
#define HAVE_reload_v4sf_si_store (TARGET_32BIT)
#define HAVE_reload_v2df_si_store (TARGET_32BIT)
#define HAVE_reload_df_si_store (TARGET_32BIT)
#define HAVE_reload_ti_si_store (TARGET_32BIT)
#define HAVE_reload_v16qi_di_store (TARGET_64BIT)
#define HAVE_reload_v8hi_di_store (TARGET_64BIT)
#define HAVE_reload_v4si_di_store (TARGET_64BIT)
#define HAVE_reload_v2di_di_store (TARGET_64BIT)
#define HAVE_reload_v4sf_di_store (TARGET_64BIT)
#define HAVE_reload_v2df_di_store (TARGET_64BIT)
#define HAVE_reload_df_di_store (TARGET_64BIT)
#define HAVE_reload_ti_di_store (TARGET_64BIT)
#define HAVE_reload_v16qi_si_load (TARGET_32BIT)
#define HAVE_reload_v8hi_si_load (TARGET_32BIT)
#define HAVE_reload_v4si_si_load (TARGET_32BIT)
#define HAVE_reload_v2di_si_load (TARGET_32BIT)
#define HAVE_reload_v4sf_si_load (TARGET_32BIT)
#define HAVE_reload_v2df_si_load (TARGET_32BIT)
#define HAVE_reload_df_si_load (TARGET_32BIT)
#define HAVE_reload_ti_si_load (TARGET_32BIT)
#define HAVE_reload_v16qi_di_load (TARGET_64BIT)
#define HAVE_reload_v8hi_di_load (TARGET_64BIT)
#define HAVE_reload_v4si_di_load (TARGET_64BIT)
#define HAVE_reload_v2di_di_load (TARGET_64BIT)
#define HAVE_reload_v4sf_di_load (TARGET_64BIT)
#define HAVE_reload_v2df_di_load (TARGET_64BIT)
#define HAVE_reload_df_di_load (TARGET_64BIT)
#define HAVE_reload_ti_di_load (TARGET_64BIT)
#define HAVE_addv4sf3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_addv2df3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_subv4sf3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_subv2df3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_mulv4sf3 ((VECTOR_UNIT_VSX_P (V4SFmode) \
    || (VECTOR_UNIT_ALTIVEC_P (V4SFmode) && TARGET_FUSED_MADD)))
#define HAVE_mulv2df3 ((VECTOR_UNIT_VSX_P (V2DFmode) \
    || (VECTOR_UNIT_ALTIVEC_P (V2DFmode) && TARGET_FUSED_MADD)))
#define HAVE_divv4sf3 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_divv2df3 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_negv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_negv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_absv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_absv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_sminv4sf3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_sminv2df3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_smaxv4sf3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_smaxv2df3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_sqrtv4sf2 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_sqrtv2df2 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_ftruncv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_ftruncv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_ceilv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_ceilv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_floorv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_floorv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_btruncv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_btruncv2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_copysignv4sf3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_copysignv2df3 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vcondv4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vcondv2df (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vcondv16qi (VECTOR_UNIT_ALTIVEC_P (V16QImode))
#define HAVE_vcondv8hi (VECTOR_UNIT_ALTIVEC_P (V8HImode))
#define HAVE_vcondv4si (VECTOR_UNIT_ALTIVEC_P (V4SImode))
#define HAVE_vconduv16qi (VECTOR_UNIT_ALTIVEC_P (V16QImode))
#define HAVE_vconduv8hi (VECTOR_UNIT_ALTIVEC_P (V8HImode))
#define HAVE_vconduv4si (VECTOR_UNIT_ALTIVEC_P (V4SImode))
#define HAVE_vector_eqv16qi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_eqv8hi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_eqv4si (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_eqv4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_eqv2df (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_gtv16qi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_gtv8hi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_gtv4si (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_gtv4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_gtv2df (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_gev16qi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_gev8hi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_gev4si (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_gev4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_gev2df (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_gtuv16qi (VECTOR_UNIT_ALTIVEC_P (V16QImode))
#define HAVE_vector_gtuv8hi (VECTOR_UNIT_ALTIVEC_P (V8HImode))
#define HAVE_vector_gtuv4si (VECTOR_UNIT_ALTIVEC_P (V4SImode))
#define HAVE_vector_geuv16qi (VECTOR_UNIT_ALTIVEC_P (V16QImode))
#define HAVE_vector_geuv8hi (VECTOR_UNIT_ALTIVEC_P (V8HImode))
#define HAVE_vector_geuv4si (VECTOR_UNIT_ALTIVEC_P (V4SImode))
#define HAVE_vector_select_v16qi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_select_v8hi (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_select_v4si (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_select_v2di (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vector_select_v4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_select_v2df (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_select_ti (VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_vector_select_v16qi_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_select_v8hi_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_select_v4si_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_select_v2di_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vector_select_v4sf_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_select_v2df_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_select_ti_uns (VECTOR_UNIT_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_vector_eq_v16qi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_eq_v8hi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_eq_v4si_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_eq_v4sf_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_eq_v2df_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_gt_v16qi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_gt_v8hi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_gt_v4si_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vector_gt_v4sf_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_gt_v2df_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_ge_v4sf_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vector_ge_v2df_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vector_gtu_v16qi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vector_gtu_v8hi_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vector_gtu_v4si_p (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_cr6_test_for_zero (TARGET_ALTIVEC || TARGET_VSX)
#define HAVE_cr6_test_for_zero_reverse (TARGET_ALTIVEC || TARGET_VSX)
#define HAVE_cr6_test_for_lt (TARGET_ALTIVEC || TARGET_VSX)
#define HAVE_cr6_test_for_lt_reverse (TARGET_ALTIVEC || TARGET_VSX)
#define HAVE_xorv16qi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_xorv8hi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_xorv4si3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_xorv2di3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_xorv4sf3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_xorv2df3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_xorti3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_iorv16qi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_iorv8hi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_iorv4si3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_iorv2di3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_iorv4sf3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_iorv2df3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_iorti3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_andv16qi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_andv8hi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_andv4si3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_andv2di3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_andv4sf3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_andv2df3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_andti3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_one_cmplv16qi2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_one_cmplv8hi2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_one_cmplv4si2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_one_cmplv2di2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_one_cmplv4sf2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_one_cmplv2df2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_one_cmplti2 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_norv16qi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_norv8hi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_norv4si3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_norv2di3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_norv4sf3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_norv2df3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_norti3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_andcv16qi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_andcv8hi3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_andcv4si3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_andcv2di3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_andcv4sf3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_andcv2df3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_andcti3 (VECTOR_MEM_ALTIVEC_OR_VSX_P (TImode))
#define HAVE_floatv4siv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_floatv2div2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_unsigned_floatv4siv4sf2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_unsigned_floatv2div2df2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_fix_truncv4sfv4si2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_fix_truncv2dfv2di2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_fixuns_truncv4sfv4si2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_fixuns_truncv2dfv2di2 (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vec_initv16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vec_initv8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vec_initv4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_initv2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vec_initv4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_initv2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vec_setv16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vec_setv8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vec_setv4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_setv2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vec_setv4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_setv2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vec_extractv16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vec_extractv8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vec_extractv4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_extractv2di (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DImode))
#define HAVE_vec_extractv4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_extractv2df (VECTOR_MEM_ALTIVEC_OR_VSX_P (V2DFmode))
#define HAVE_vec_interleave_highv4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_interleave_lowv4sf (VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_interleave_highv2di (VECTOR_UNIT_VSX_P (V2DImode))
#define HAVE_vec_interleave_highv2df (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vec_interleave_lowv2di (VECTOR_UNIT_VSX_P (V2DImode))
#define HAVE_vec_interleave_lowv2df (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vec_pack_trunc_v2df (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC)
#define HAVE_vec_pack_sfix_trunc_v2df (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC)
#define HAVE_vec_pack_ufix_trunc_v2df (VECTOR_UNIT_VSX_P (V2DFmode) && TARGET_ALTIVEC)
#define HAVE_vec_unpacks_hi_v4sf (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_unpacks_lo_v4sf (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_vec_unpacks_float_hi_v4si (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_unpacks_float_lo_v4si (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_unpacku_float_hi_v4si (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_unpacku_float_lo_v4si (VECTOR_UNIT_VSX_P (V2DFmode) && VECTOR_UNIT_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_realign_load_v16qi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V16QImode))
#define HAVE_vec_realign_load_v8hi (VECTOR_MEM_ALTIVEC_OR_VSX_P (V8HImode))
#define HAVE_vec_realign_load_v4si (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SImode))
#define HAVE_vec_realign_load_v4sf (VECTOR_MEM_ALTIVEC_OR_VSX_P (V4SFmode))
#define HAVE_movmisalignv4si (VECTOR_MEM_VSX_P (V4SImode) && TARGET_ALLOW_MOVMISALIGN)
#define HAVE_movmisalignv4sf (VECTOR_MEM_VSX_P (V4SFmode) && TARGET_ALLOW_MOVMISALIGN)
#define HAVE_movmisalignv2di (VECTOR_MEM_VSX_P (V2DImode) && TARGET_ALLOW_MOVMISALIGN)
#define HAVE_movmisalignv2df (VECTOR_MEM_VSX_P (V2DFmode) && TARGET_ALLOW_MOVMISALIGN)
#define HAVE_vec_shl_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_shl_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_shl_v4si (TARGET_ALTIVEC)
#define HAVE_vec_shl_v2di (TARGET_ALTIVEC)
#define HAVE_vec_shl_v4sf (TARGET_ALTIVEC)
#define HAVE_vec_shl_v2df (TARGET_ALTIVEC)
#define HAVE_vec_shl_ti (TARGET_ALTIVEC)
#define HAVE_vec_shr_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_shr_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_shr_v4si (TARGET_ALTIVEC)
#define HAVE_vec_shr_v2di (TARGET_ALTIVEC)
#define HAVE_vec_shr_v4sf (TARGET_ALTIVEC)
#define HAVE_vec_shr_v2df (TARGET_ALTIVEC)
#define HAVE_vec_shr_ti (TARGET_ALTIVEC)
#define HAVE_vrotlv16qi3 (TARGET_ALTIVEC)
#define HAVE_vrotlv8hi3 (TARGET_ALTIVEC)
#define HAVE_vrotlv4si3 (TARGET_ALTIVEC)
#define HAVE_vashlv16qi3 (TARGET_ALTIVEC)
#define HAVE_vashlv8hi3 (TARGET_ALTIVEC)
#define HAVE_vashlv4si3 (TARGET_ALTIVEC)
#define HAVE_vlshrv16qi3 (TARGET_ALTIVEC)
#define HAVE_vlshrv8hi3 (TARGET_ALTIVEC)
#define HAVE_vlshrv4si3 (TARGET_ALTIVEC)
#define HAVE_vashrv16qi3 (TARGET_ALTIVEC)
#define HAVE_vashrv8hi3 (TARGET_ALTIVEC)
#define HAVE_vashrv4si3 (TARGET_ALTIVEC)
#define HAVE_vsx_tdivdf3_fg (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_tdivv4sf3_fg (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_tdivv2df3_fg (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_tdivdf3_fe (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_tdivv4sf3_fe (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_tdivv2df3_fe (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_tsqrtdf2_fg (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_tsqrtv4sf2_fg (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_tsqrtv2df2_fg (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_tsqrtdf2_fe (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_tsqrtv4sf2_fe (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_tsqrtv2df2_fe (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fmadddf4 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fmaddv4sf4 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fmaddv2df4 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fmsubdf4 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fmsubv4sf4 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fmsubv2df4 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fnmadddf4 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fnmaddv4sf4 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fnmaddv2df4 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_vsx_fnmsubdf4 (VECTOR_UNIT_VSX_P (DFmode))
#define HAVE_vsx_fnmsubv4sf4 (VECTOR_UNIT_VSX_P (V4SFmode))
#define HAVE_vsx_fnmsubv2df4 (VECTOR_UNIT_VSX_P (V2DFmode))
#define HAVE_altivec_mulv4sf3 (VECTOR_UNIT_ALTIVEC_P (V4SFmode) && TARGET_FUSED_MADD)
#define HAVE_mulv4si3 (TARGET_ALTIVEC)
#define HAVE_mulv8hi3 (TARGET_ALTIVEC)
#define HAVE_altivec_copysign_v4sf3 (VECTOR_UNIT_ALTIVEC_P (V4SFmode))
#define HAVE_build_vector_mask_for_load (TARGET_ALTIVEC)
#define HAVE_absv4si2 (TARGET_ALTIVEC)
#define HAVE_absv8hi2 (TARGET_ALTIVEC)
#define HAVE_absv16qi2 (TARGET_ALTIVEC)
#define HAVE_altivec_absv4sf2 (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v8hi (TARGET_ALTIVEC)
#define HAVE_altivec_abss_v16qi (TARGET_ALTIVEC)
#define HAVE_reduc_splus_v8hi (TARGET_ALTIVEC)
#define HAVE_reduc_splus_v16qi (TARGET_ALTIVEC)
#define HAVE_reduc_uplus_v16qi (TARGET_ALTIVEC)
#define HAVE_negv4si2 (TARGET_ALTIVEC)
#define HAVE_negv8hi2 (TARGET_ALTIVEC)
#define HAVE_negv16qi2 (TARGET_ALTIVEC)
#define HAVE_udot_prodv8hi (TARGET_ALTIVEC)
#define HAVE_udot_prodv16qi (TARGET_ALTIVEC)
#define HAVE_sdot_prodv8hi (TARGET_ALTIVEC)
#define HAVE_widen_usumv8hi3 (TARGET_ALTIVEC)
#define HAVE_widen_usumv16qi3 (TARGET_ALTIVEC)
#define HAVE_widen_ssumv16qi3 (TARGET_ALTIVEC)
#define HAVE_widen_ssumv8hi3 (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_hi_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_lo_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_hi_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_lo_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_widen_umult_hi_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_widen_umult_lo_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_widen_smult_hi_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_widen_smult_lo_v16qi (TARGET_ALTIVEC)
#define HAVE_vec_widen_umult_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_widen_umult_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_widen_smult_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_widen_smult_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_pack_trunc_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_pack_trunc_v4si (TARGET_ALTIVEC)
#define HAVE_altivec_negv4sf2 (TARGET_ALTIVEC)
#define HAVE_vec_extract_evenv4si (TARGET_ALTIVEC)
#define HAVE_vec_extract_evenv4sf (TARGET_ALTIVEC)
#define HAVE_vec_extract_evenv8hi (TARGET_ALTIVEC)
#define HAVE_vec_extract_evenv16qi (TARGET_ALTIVEC)
#define HAVE_vec_extract_oddv4si (TARGET_ALTIVEC)
#define HAVE_vec_extract_oddv4sf (TARGET_ALTIVEC)
#define HAVE_vec_extract_oddv8hi (TARGET_ALTIVEC)
#define HAVE_vec_extract_oddv16qi (TARGET_ALTIVEC)
#define HAVE_vec_interleave_highv4si (TARGET_ALTIVEC)
#define HAVE_vec_interleave_highv8hi (TARGET_ALTIVEC)
#define HAVE_vec_interleave_highv16qi (TARGET_ALTIVEC)
#define HAVE_vec_interleave_lowv4si (TARGET_ALTIVEC)
#define HAVE_vec_interleave_lowv8hi (TARGET_ALTIVEC)
#define HAVE_vec_interleave_lowv16qi (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_float_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacks_float_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_float_hi_v8hi (TARGET_ALTIVEC)
#define HAVE_vec_unpacku_float_lo_v8hi (TARGET_ALTIVEC)
#define HAVE_movsd (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_extendsdtd2 (TARGET_DFP)
#define HAVE_negdd2 (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_absdd2 (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_movdd 1
#define HAVE_negtd2 (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_abstd2 (TARGET_HARD_FLOAT && TARGET_FPRS)
#define HAVE_movtd (TARGET_HARD_FLOAT && TARGET_FPRS)
static inline rtx gen_adddi3_high                       (rtx, rtx, rtx);
static inline rtx
gen_adddi3_high(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdf_low_si                      (rtx, rtx, rtx);
static inline rtx
gen_movdf_low_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdf_low_di                      (rtx, rtx, rtx);
static inline rtx
gen_movdf_low_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdf_low_st_si                   (rtx, rtx, rtx);
static inline rtx
gen_movdf_low_st_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdf_low_st_di                   (rtx, rtx, rtx);
static inline rtx
gen_movdf_low_st_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movsf_low_si                      (rtx, rtx, rtx);
static inline rtx
gen_movsf_low_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movsf_low_di                      (rtx, rtx, rtx);
static inline rtx
gen_movsf_low_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movsf_low_st_si                   (rtx, rtx, rtx);
static inline rtx
gen_movsf_low_st_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movsf_low_st_di                   (rtx, rtx, rtx);
static inline rtx
gen_movsf_low_st_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdi_low                         (rtx, rtx, rtx);
static inline rtx
gen_movdi_low(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movsi_low_st                      (rtx, rtx, rtx);
static inline rtx
gen_movsi_low_st(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movdi_low_st                      (rtx, rtx, rtx);
static inline rtx
gen_movdi_low_st(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_macho_high_si                     (rtx, rtx);
static inline rtx
gen_macho_high_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_macho_high_di                     (rtx, rtx);
static inline rtx
gen_macho_high_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_macho_low_si                      (rtx, rtx, rtx);
static inline rtx
gen_macho_low_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_macho_low_di                      (rtx, rtx, rtx);
static inline rtx
gen_macho_low_di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_load_macho_picbase_si             (rtx);
extern rtx        gen_load_macho_picbase_di             (rtx);
extern rtx        gen_macho_correct_pic_si              (rtx, rtx, rtx, rtx);
extern rtx        gen_macho_correct_pic_di              (rtx, rtx, rtx, rtx);
extern rtx        gen_extendqidi2                       (rtx, rtx);
extern rtx        gen_extendqisi2_ppc                   (rtx, rtx);
extern rtx        gen_extendqihi2_ppc                   (rtx, rtx);
extern rtx        gen_dlmzb                             (rtx, rtx, rtx, rtx);
static inline rtx gen_addsi3_high                       (rtx, rtx, rtx);
static inline rtx
gen_addsi3_high(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_one_cmplsi2                       (rtx, rtx);
extern rtx        gen_one_cmpldi2                       (rtx, rtx);
extern rtx        gen_abssi2_isel                       (rtx, rtx);
extern rtx        gen_absdi2_isel                       (rtx, rtx);
extern rtx        gen_nabssi2_isel                      (rtx, rtx);
extern rtx        gen_nabsdi2_isel                      (rtx, rtx);
extern rtx        gen_abssi2_nopower                    (rtx, rtx);
extern rtx        gen_clzsi2                            (rtx, rtx);
extern rtx        gen_clzdi2                            (rtx, rtx);
extern rtx        gen_popcntbsi2                        (rtx, rtx);
extern rtx        gen_popcntbdi2                        (rtx, rtx);
extern rtx        gen_popcntwsi2                        (rtx, rtx);
extern rtx        gen_popcntddi2                        (rtx, rtx);
extern rtx        gen_bswaphi2_internal                 (rtx, rtx);
extern rtx        gen_bswapdi2_32bit                    (rtx, rtx);
static inline rtx gen_mulsi3_mq                         (rtx, rtx, rtx);
static inline rtx
gen_mulsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulsi3_no_mq                      (rtx, rtx, rtx);
static inline rtx gen_udivsi3_mq                        (rtx, rtx, rtx);
static inline rtx
gen_udivsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divsi3_mq                         (rtx, rtx, rtx);
static inline rtx
gen_divsi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_mulh_call                         (void);
extern rtx        gen_mull_call                         (void);
extern rtx        gen_divss_call                        (void);
extern rtx        gen_divus_call                        (void);
extern rtx        gen_quoss_call                        (void);
extern rtx        gen_quous_call                        (void);
extern rtx        gen_andsi3_mc                         (rtx, rtx, rtx);
extern rtx        gen_andsi3_nomc                       (rtx, rtx, rtx);
extern rtx        gen_andsi3_internal0_nomc             (rtx, rtx, rtx);
extern rtx        gen_insvsi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_insvdi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_extzvdi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_rotlsi3                           (rtx, rtx, rtx);
static inline rtx gen_ashlsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashlsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashlsi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_rlwinm                            (rtx, rtx, rtx, rtx);
static inline rtx gen_lshrsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_lshrsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_lshrsi3_no_power                  (rtx, rtx, rtx);
static inline rtx gen_ashrsi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashrsi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashrsi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_aux_truncdfsf2                    (rtx, rtx);
extern rtx        gen_fres                              (rtx, rtx);
extern rtx        gen_isel_signed_si                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_isel_signed_di                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_isel_unsigned_si                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_isel_unsigned_di                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_fix_truncdfsi2_internal_gfxopt    (rtx, rtx, rtx);
extern rtx        gen_fix_truncdfsi2_mfpgpr             (rtx, rtx, rtx, rtx);
extern rtx        gen_fctiwz                            (rtx, rtx);
extern rtx        gen_btruncsf2                         (rtx, rtx);
extern rtx        gen_ceilsf2                           (rtx, rtx);
extern rtx        gen_floorsf2                          (rtx, rtx);
extern rtx        gen_rounddf2                          (rtx, rtx);
extern rtx        gen_roundsf2                          (rtx, rtx);
extern rtx        gen_stfiwx                            (rtx, rtx);
extern rtx        gen_floatdisf2_internal1              (rtx, rtx);
static inline rtx gen_mulsidi3_mq                       (rtx, rtx, rtx);
static inline rtx
gen_mulsidi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsidi3_mq                      (rtx, rtx, rtx);
static inline rtx
gen_umulsidi3_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smulsi3_highpart_mq               (rtx, rtx, rtx);
static inline rtx
gen_smulsi3_highpart_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_umulsi3_highpart_mq               (rtx, rtx, rtx);
static inline rtx
gen_umulsi3_highpart_mq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ashldi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashldi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_lshrdi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_lshrdi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_ashrdi3_power                     (rtx, rtx, rtx);
static inline rtx
gen_ashrdi3_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_ashrdi3_no_power                  (rtx, rtx, rtx);
extern rtx        gen_absdi2_internal                   (rtx, rtx);
extern rtx        gen_muldi3                            (rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_rotldi3                           (rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal5                 (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_internal8                 (rtx, rtx, rtx, rtx);
extern rtx        gen_anddi3_mc                         (rtx, rtx, rtx);
extern rtx        gen_anddi3_nomc                       (rtx, rtx, rtx);
static inline rtx gen_movsi_low                         (rtx, rtx, rtx);
static inline rtx
gen_movsi_low(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_trunctfdf2_internal1              (rtx, rtx);
extern rtx        gen_trunctfdf2_internal2              (rtx, rtx);
extern rtx        gen_trunctfsf2_fprs                   (rtx, rtx);
extern rtx        gen_fix_trunc_helper                  (rtx, rtx, rtx);
extern rtx        gen_negtf2_internal                   (rtx, rtx);
extern rtx        gen_movdi_si_update                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_di_update                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_si_update_stack             (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_di_update_stack             (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi_update                      (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi_update_stack                (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_gd_aix32                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_tls_gd_aix64                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_tls_gd_sysvsi                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_tls_gd_sysvdi                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_tls_ld_aix32                      (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_ld_aix64                      (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_ld_sysvsi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_ld_sysvdi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_32                     (rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_64                     (rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_ha_32                  (rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_ha_64                  (rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_lo_32                  (rtx, rtx, rtx);
extern rtx        gen_tls_dtprel_lo_64                  (rtx, rtx, rtx);
extern rtx        gen_tls_got_dtprel_32                 (rtx, rtx, rtx);
extern rtx        gen_tls_got_dtprel_64                 (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_32                      (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_64                      (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_ha_32                   (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_ha_64                   (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_lo_32                   (rtx, rtx, rtx);
extern rtx        gen_tls_tprel_lo_64                   (rtx, rtx, rtx);
extern rtx        gen_tls_got_tprel_32                  (rtx, rtx, rtx);
extern rtx        gen_tls_got_tprel_64                  (rtx, rtx, rtx);
extern rtx        gen_tls_tls_32                        (rtx, rtx, rtx);
extern rtx        gen_tls_tls_64                        (rtx, rtx, rtx);
extern rtx        gen_load_toc_aix_si                   (rtx);
extern rtx        gen_load_toc_aix_di                   (rtx);
extern rtx        gen_load_toc_v4_pic_si                (void);
extern rtx        gen_load_toc_v4_PIC_1                 (rtx);
extern rtx        gen_load_toc_v4_PIC_1b                (rtx, rtx);
extern rtx        gen_load_toc_v4_PIC_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_load_toc_v4_PIC_3b                (rtx, rtx, rtx, rtx);
extern rtx        gen_load_toc_v4_PIC_3c                (rtx, rtx, rtx, rtx);
extern rtx        gen_elf_high                          (rtx, rtx);
extern rtx        gen_elf_low                           (rtx, rtx, rtx);
extern rtx        gen_blockage                          (void);
extern rtx        gen_probe_stack                       (rtx);
extern rtx        gen_stack_protect_setsi               (rtx, rtx);
extern rtx        gen_stack_protect_setdi               (rtx, rtx);
extern rtx        gen_stack_protect_testsi              (rtx, rtx, rtx);
extern rtx        gen_stack_protect_testdi              (rtx, rtx, rtx);
static inline rtx gen_move_from_CR_gt_bit               (rtx, rtx);
static inline rtx
gen_move_from_CR_gt_bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_move_from_CR_ov_bit               (rtx, rtx);
extern rtx        gen_jump                              (rtx);
extern rtx        gen_return                            (void);
extern rtx        gen_nop                               (void);
extern rtx        gen_trap                              (void);
extern rtx        gen_movesi_from_cr                    (rtx);
extern rtx        gen_stack_tie                         (rtx);
extern rtx        gen_frame_tie                         (rtx, rtx);
extern rtx        gen_eh_set_lr_si                      (rtx);
extern rtx        gen_eh_set_lr_di                      (rtx);
extern rtx        gen_prefetch                          (rtx, rtx, rtx);
extern rtx        gen_bpermd_si                         (rtx, rtx, rtx);
extern rtx        gen_bpermd_di                         (rtx, rtx, rtx);
extern rtx        gen_load_locked_si                    (rtx, rtx);
extern rtx        gen_load_locked_di                    (rtx, rtx);
extern rtx        gen_store_conditional_si              (rtx, rtx, rtx);
extern rtx        gen_store_conditional_di              (rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapsi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapdi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapqhi_internal (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setsi          (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setdi          (rtx, rtx, rtx);
extern rtx        gen_isync                             (void);
extern rtx        gen_lwsync                            (void);
extern rtx        gen_vsx_fredf2                        (rtx, rtx);
extern rtx        gen_vsx_frev4sf2                      (rtx, rtx);
extern rtx        gen_vsx_frev2df2                      (rtx, rtx);
extern rtx        gen_vsx_nabsdf2                       (rtx, rtx);
extern rtx        gen_vsx_nabsv4sf2                     (rtx, rtx);
extern rtx        gen_vsx_nabsv2df2                     (rtx, rtx);
extern rtx        gen_vsx_smaxdf3                       (rtx, rtx, rtx);
extern rtx        gen_vsx_smaxv4sf3                     (rtx, rtx, rtx);
extern rtx        gen_vsx_smaxv2df3                     (rtx, rtx, rtx);
extern rtx        gen_vsx_rsqrtedf2                     (rtx, rtx);
extern rtx        gen_vsx_rsqrtev4sf2                   (rtx, rtx);
extern rtx        gen_vsx_rsqrtev2df2                   (rtx, rtx);
extern rtx        gen_vsx_fmadddf4_2                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmaddv4sf4_2                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmaddv2df4_2                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubdf4_2                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubv4sf4_2                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubv2df4_2                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmadddf4_1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv4sf4_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv2df4_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmadddf4_2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv4sf4_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv2df4_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmadddf4_3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv4sf4_3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv2df4_3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubdf4_1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv4sf4_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv2df4_1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubdf4_2                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv4sf4_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv2df4_2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubdf4_3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv4sf4_3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv2df4_3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_eqv4sf                        (rtx, rtx, rtx);
extern rtx        gen_vsx_eqv2df                        (rtx, rtx, rtx);
extern rtx        gen_vsx_gtv4sf                        (rtx, rtx, rtx);
extern rtx        gen_vsx_gtv2df                        (rtx, rtx, rtx);
extern rtx        gen_vsx_copysigndf3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_copysignv4sf3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_copysignv2df3                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_floatdidf2                    (rtx, rtx);
extern rtx        gen_vsx_floatv4siv4sf2                (rtx, rtx);
extern rtx        gen_vsx_floatv2div2df2                (rtx, rtx);
extern rtx        gen_vsx_floatunsdidf2                 (rtx, rtx);
extern rtx        gen_vsx_floatunsv4siv4sf2             (rtx, rtx);
extern rtx        gen_vsx_floatunsv2div2df2             (rtx, rtx);
extern rtx        gen_vsx_fix_truncdfdi2                (rtx, rtx);
extern rtx        gen_vsx_fix_truncv4sfv4si2            (rtx, rtx);
extern rtx        gen_vsx_fix_truncv2dfv2di2            (rtx, rtx);
extern rtx        gen_vsx_fixuns_truncdfdi2             (rtx, rtx);
extern rtx        gen_vsx_fixuns_truncv4sfv4si2         (rtx, rtx);
extern rtx        gen_vsx_fixuns_truncv2dfv2di2         (rtx, rtx);
extern rtx        gen_vsx_xsrdpi                        (rtx, rtx);
extern rtx        gen_vsx_xvrspi                        (rtx, rtx);
extern rtx        gen_vsx_xvrdpi                        (rtx, rtx);
extern rtx        gen_vsx_xsrdpic                       (rtx, rtx);
extern rtx        gen_vsx_xvrspic                       (rtx, rtx);
extern rtx        gen_vsx_xvrdpic                       (rtx, rtx);
extern rtx        gen_vsx_btruncdf2                     (rtx, rtx);
extern rtx        gen_vsx_btruncv4sf2                   (rtx, rtx);
extern rtx        gen_vsx_btruncv2df2                   (rtx, rtx);
extern rtx        gen_vsx_floordf2                      (rtx, rtx);
extern rtx        gen_vsx_floorv4sf2                    (rtx, rtx);
extern rtx        gen_vsx_floorv2df2                    (rtx, rtx);
extern rtx        gen_vsx_ceildf2                       (rtx, rtx);
extern rtx        gen_vsx_ceilv4sf2                     (rtx, rtx);
extern rtx        gen_vsx_ceilv2df2                     (rtx, rtx);
extern rtx        gen_vsx_xscvdpsp                      (rtx, rtx);
extern rtx        gen_vsx_xvcvspdp                      (rtx, rtx);
extern rtx        gen_vsx_xvcvdpsp                      (rtx, rtx);
extern rtx        gen_vsx_xscvspdp                      (rtx, rtx);
extern rtx        gen_vsx_xscvdpsp_scalar               (rtx, rtx);
extern rtx        gen_vsx_xvcvdpsxws                    (rtx, rtx);
extern rtx        gen_vsx_xvcvdpuxws                    (rtx, rtx);
extern rtx        gen_vsx_xvcvsxdsp                     (rtx, rtx);
extern rtx        gen_vsx_xvcvuxdsp                     (rtx, rtx);
extern rtx        gen_vsx_xvcvsxwdp                     (rtx, rtx);
extern rtx        gen_vsx_xvcvuxwdp                     (rtx, rtx);
extern rtx        gen_vsx_xvcvspsxds                    (rtx, rtx);
extern rtx        gen_vsx_xvcvspuxds                    (rtx, rtx);
extern rtx        gen_vsx_concat_v2df                   (rtx, rtx, rtx);
extern rtx        gen_vsx_concat_v2di                   (rtx, rtx, rtx);
extern rtx        gen_vsx_concat_v2sf                   (rtx, rtx, rtx);
extern rtx        gen_vsx_set_v2df                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_set_v2di                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_extract_v2df                  (rtx, rtx, rtx);
extern rtx        gen_vsx_extract_v2di                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v4sf                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_v2df                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxpermdi_ti                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_splat_v2df                    (rtx, rtx);
extern rtx        gen_vsx_splat_v2di                    (rtx, rtx);
extern rtx        gen_vsx_xxspltw_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxspltw_v4si                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxmrghw_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxmrghw_v4si                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxmrglw_v4sf                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxmrglw_v4si                  (rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v16qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v8hi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v4si                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v2di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v4sf                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_v2df                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_xxsldwi_ti                    (rtx, rtx, rtx, rtx);
extern rtx        gen_get_vrsave_internal               (rtx);
extern rtx        gen_addv4si3                          (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_addv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddcuw                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vadduws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vadduhs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddubs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddshs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vaddsbs                   (rtx, rtx, rtx);
extern rtx        gen_subv4si3                          (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubcuw                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubuws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubuhs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsububs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubshs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsubsbs                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vavguw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavguh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgub                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vavgsb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vcmpbfp                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmaddfp                   (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vnmsubfp                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumuhm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumubm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsummhm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsummbm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumshm                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumuhs                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmsumshs                  (rtx, rtx, rtx, rtx);
extern rtx        gen_umaxv4si3                         (rtx, rtx, rtx);
extern rtx        gen_umaxv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_umaxv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4si3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_uminv4si3                         (rtx, rtx, rtx);
extern rtx        gen_uminv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_uminv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_sminv4si3                         (rtx, rtx, rtx);
extern rtx        gen_sminv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_sminv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_altivec_vmhaddshs                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmhraddshs                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmladduhm                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrghw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglh                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmrglw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuleub                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulesb                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuleuh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulesh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmuloub                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulosb                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulouh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vmulosh                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuhum                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuwum                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkpx                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkshss                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkswss                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuhus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkshus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkuwus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vpkswus                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vsl                       (rtx, rtx, rtx);
extern rtx        gen_altivec_vslo                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vsr                       (rtx, rtx, rtx);
extern rtx        gen_altivec_vsro                      (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4ubs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4shs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum4sbs                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsum2sws                  (rtx, rtx, rtx);
extern rtx        gen_altivec_vsumsws                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltb                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vsplth                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltw                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltsf                   (rtx, rtx, rtx);
extern rtx        gen_altivec_vspltisw                  (rtx, rtx);
extern rtx        gen_altivec_vspltish                  (rtx, rtx);
extern rtx        gen_altivec_vspltisb                  (rtx, rtx);
extern rtx        gen_altivec_vperm_v4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v4sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v2df                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_ti                  (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v4si_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v8hi_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v16qi_uns           (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v4sf_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v2df_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_v2di_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vperm_ti_uns              (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vrfip                     (rtx, rtx);
extern rtx        gen_altivec_vrfin                     (rtx, rtx);
extern rtx        gen_altivec_vcfux                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vcfsx                     (rtx, rtx, rtx);
extern rtx        gen_altivec_vctuxs                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vctsxs                    (rtx, rtx, rtx);
extern rtx        gen_altivec_vlogefp                   (rtx, rtx);
extern rtx        gen_altivec_vexptefp                  (rtx, rtx);
extern rtx        gen_altivec_vrsqrtefp                 (rtx, rtx);
extern rtx        gen_altivec_vrefp                     (rtx, rtx);
extern rtx        gen_altivec_vsldoi_v4si               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v8hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v16qi              (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v4sf               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v2df               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_v2di               (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vsldoi_ti                 (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_vupkhsb                   (rtx, rtx);
extern rtx        gen_altivec_vupkhpx                   (rtx, rtx);
extern rtx        gen_altivec_vupkhsh                   (rtx, rtx);
extern rtx        gen_altivec_vupklsb                   (rtx, rtx);
extern rtx        gen_altivec_vupklpx                   (rtx, rtx);
extern rtx        gen_altivec_vupklsh                   (rtx, rtx);
extern rtx        gen_altivec_vcmpbfp_p                 (rtx, rtx, rtx);
extern rtx        gen_altivec_mtvscr                    (rtx);
extern rtx        gen_altivec_mfvscr                    (rtx);
extern rtx        gen_altivec_dssall                    (void);
extern rtx        gen_altivec_dss                       (rtx);
extern rtx        gen_altivec_dst                       (rtx, rtx, rtx);
extern rtx        gen_altivec_dstt                      (rtx, rtx, rtx);
extern rtx        gen_altivec_dstst                     (rtx, rtx, rtx);
extern rtx        gen_altivec_dststt                    (rtx, rtx, rtx);
extern rtx        gen_altivec_lvsl                      (rtx, rtx);
extern rtx        gen_altivec_lvsr                      (rtx, rtx);
extern rtx        gen_altivec_lvewx                     (rtx, rtx);
extern rtx        gen_altivec_lvehx                     (rtx, rtx);
extern rtx        gen_altivec_lvebx                     (rtx, rtx);
extern rtx        gen_altivec_lvxl                      (rtx, rtx);
extern rtx        gen_altivec_lvx                       (rtx, rtx);
extern rtx        gen_altivec_stvx                      (rtx, rtx);
extern rtx        gen_altivec_stvxl                     (rtx, rtx);
extern rtx        gen_altivec_stvewx                    (rtx, rtx);
extern rtx        gen_altivec_stvehx                    (rtx, rtx);
extern rtx        gen_altivec_stvebx                    (rtx, rtx);
extern rtx        gen_altivec_vsumsws_nomode            (rtx, rtx, rtx);
extern rtx        gen_vperm_v8hiv4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vperm_v16qiv8hi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_lvlx                      (rtx, rtx);
extern rtx        gen_altivec_lvlxl                     (rtx, rtx);
extern rtx        gen_altivec_lvrx                      (rtx, rtx);
extern rtx        gen_altivec_lvrxl                     (rtx, rtx);
extern rtx        gen_altivec_stvlx                     (rtx, rtx);
extern rtx        gen_altivec_stvlxl                    (rtx, rtx);
extern rtx        gen_altivec_stvrx                     (rtx, rtx);
extern rtx        gen_altivec_stvrxl                    (rtx, rtx);
extern rtx        gen_vpkuhum_nomode                    (rtx, rtx, rtx);
extern rtx        gen_vpkuwum_nomode                    (rtx, rtx, rtx);
static inline rtx gen_spe_fixuns_truncdfsi2             (rtx, rtx);
static inline rtx
gen_spe_fixuns_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_extendsfdf2                   (rtx, rtx);
static inline rtx
gen_spe_extendsfdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fixuns_truncsfsi2             (rtx, rtx);
static inline rtx
gen_spe_fixuns_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fix_truncsfsi2                (rtx, rtx);
static inline rtx
gen_spe_fix_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fix_truncdfsi2                (rtx, rtx);
static inline rtx
gen_spe_fix_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatunssisf2                 (rtx, rtx);
static inline rtx
gen_spe_floatunssisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatunssidf2                 (rtx, rtx);
static inline rtx
gen_spe_floatunssidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatsisf2                    (rtx, rtx);
static inline rtx
gen_spe_floatsisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_floatsidf2                    (rtx, rtx);
static inline rtx
gen_spe_floatsidf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_absv2si2                          (rtx, rtx);
static inline rtx
gen_absv2si2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evandc                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evandc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_andv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_andv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpeq                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpgts                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpgts(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpgtu                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpgtu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmplts                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmplts(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcmpltu                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evcmpltu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmpeq                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmpeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmpgt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmpgt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscmplt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfscmplt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststeq                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststeq(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststgt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststgt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfststlt                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evfststlt(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evcntlsw                      (rtx, rtx);
static inline rtx
gen_spe_evcntlsw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evcntlzw                      (rtx, rtx);
static inline rtx
gen_spe_evcntlzw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_eveqv                         (rtx, rtx, rtx);
static inline rtx
gen_spe_eveqv(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evextsb                       (rtx, rtx);
static inline rtx
gen_spe_evextsb(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evextsh                       (rtx, rtx);
static inline rtx
gen_spe_evextsh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evlhhesplat                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhesplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhesplatx                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhesplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhossplat                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhossplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhossplatx                 (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhossplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhousplat                  (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhousplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlhhousplatx                 (rtx, rtx, rtx);
static inline rtx
gen_spe_evlhhousplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhsplat                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhsplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhsplatx                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhsplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwwsplat                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwwsplat(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwwsplatx                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwwsplatx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergehi                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergehi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergehilo                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergehilo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergelo                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergelo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmergelohi                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmergelohi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evnand                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evnand(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_negv2si2                          (rtx, rtx);
static inline rtx
gen_negv2si2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evnor                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evnor(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evorc                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evorc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evor                          (rtx, rtx, rtx);
static inline rtx
gen_spe_evor(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrlwi                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evrlwi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrlw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evrlw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evrndw                        (rtx, rtx);
static inline rtx
gen_spe_evrndw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsel                         (rtx, rtx, rtx, rtx);
static inline rtx
gen_spe_evsel(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_spe_evsel_fs                      (rtx, rtx, rtx, rtx);
static inline rtx
gen_spe_evsel_fs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_spe_evslwi                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evslwi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evslw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evslw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwis                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwis(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwiu                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwiu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrws                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrws(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsrwu                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evsrwu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv4hi3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv4hi3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_xorv1di3                          (rtx, rtx, rtx);
static inline rtx
gen_xorv1di3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsabs                       (rtx, rtx);
static inline rtx
gen_spe_evfsabs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsadd                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsadd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfscfsf                      (rtx, rtx);
static inline rtx
gen_spe_evfscfsf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfsi                      (rtx, rtx);
static inline rtx
gen_spe_evfscfsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfuf                      (rtx, rtx);
static inline rtx
gen_spe_evfscfuf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfscfui                      (rtx, rtx);
static inline rtx
gen_spe_evfscfui(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsf                      (rtx, rtx);
static inline rtx
gen_spe_evfsctsf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsi                      (rtx, rtx);
static inline rtx
gen_spe_evfsctsi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctsiz                     (rtx, rtx);
static inline rtx
gen_spe_evfsctsiz(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctuf                      (rtx, rtx);
static inline rtx
gen_spe_evfsctuf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctui                      (rtx, rtx);
static inline rtx
gen_spe_evfsctui(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsctuiz                     (rtx, rtx);
static inline rtx
gen_spe_evfsctuiz(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsdiv                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsdiv(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsmul                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfsmul(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evfsnabs                      (rtx, rtx);
static inline rtx
gen_spe_evfsnabs(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfsneg                       (rtx, rtx);
static inline rtx
gen_spe_evfsneg(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evfssub                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evfssub(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldd                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlddx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evlddx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldh                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldhx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evldhx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldw                         (rtx, rtx, rtx);
static inline rtx
gen_spe_evldw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evldwx                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evldwx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhe                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhex                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhos                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhos(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhosx                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhosx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhou                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhou(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evlwhoux                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evlwhoux(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_brinc                         (rtx, rtx, rtx);
static inline rtx
gen_spe_brinc(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhegumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhegumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhesmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhesmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhessianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhessianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheusiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmheusianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmheusianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhogumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhogumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhosmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhosmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfanw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfanw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhossianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhossianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhoumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhoumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhousiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhousiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmhousianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmhousianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmmlssfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmmlssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmmlssf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmmlssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhusian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhusian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssf                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlsmiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlsmianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlsmianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlssiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlssianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlssianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumia                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlumi                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlusiaaw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwlusianw                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwlusianw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfan                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmfa                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmf                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmiaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmian                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmia                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwsmi                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwsmi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfan                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssfa                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssfa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwssf                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwssf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumiaa                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumian                     (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumia                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumia(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwumi                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwumi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_addv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_addv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evaddusiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddumiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddssiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddsmiaaw                   (rtx, rtx);
static inline rtx
gen_spe_evaddsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evaddiw                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evaddiw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsubifw                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evsubifw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_subv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsubfusiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfusiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfumiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfumiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfssiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfssiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsubfsmiaaw                  (rtx, rtx);
static inline rtx
gen_spe_evsubfsmiaaw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evmra                         (rtx, rtx);
static inline rtx
gen_spe_evmra(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_divv2si3                          (rtx, rtx, rtx);
static inline rtx
gen_divv2si3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evdivwu                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evdivwu(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evsplatfi                     (rtx, rtx);
static inline rtx
gen_spe_evsplatfi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evsplati                      (rtx, rtx);
static inline rtx
gen_spe_evsplati(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evstdd                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstddx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstddx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdh                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdh(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdhx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdhx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdw                        (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdw(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstdwx                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstdwx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhe                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhex                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwho                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwho(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwhox                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwhox(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwe                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwe(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwex                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwex(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwo                       (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwo(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evstwwox                      (rtx, rtx, rtx);
static inline rtx
gen_spe_evstwwox(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_truncdfsf2                    (rtx, rtx);
static inline rtx
gen_spe_truncdfsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_absdf2                        (rtx, rtx);
static inline rtx
gen_spe_absdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_nabsdf2                       (rtx, rtx);
static inline rtx
gen_spe_nabsdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_negdf2                        (rtx, rtx);
static inline rtx
gen_spe_negdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_adddf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_adddf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_subdf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_subdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_muldf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_muldf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_divdf3                        (rtx, rtx, rtx);
static inline rtx
gen_spe_divdf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_trunctfdf2_internal1          (rtx, rtx);
static inline rtx
gen_spe_trunctfdf2_internal1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_trunctfsf2                    (rtx, rtx);
static inline rtx
gen_spe_trunctfsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_extenddftf2                   (rtx, rtx);
static inline rtx
gen_spe_extenddftf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_fix_trunctfsi2_internal       (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_spe_fix_trunctfsi2_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
static inline rtx gen_spe_negtf2_internal               (rtx, rtx);
static inline rtx
gen_spe_negtf2_internal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssmaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssmaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhusiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhusiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumiaa                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssfan                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhssian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhssian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmfan                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhsmian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhumian                    (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgssfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgssfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmfaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmfaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgumiaa                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgumiaa(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgssfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgssfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmfan                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmfan(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgsmian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgsmian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_evmwhgumian                   (rtx, rtx, rtx);
static inline rtx
gen_spe_evmwhgumian(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_mtspefscr                     (rtx);
static inline rtx
gen_spe_mtspefscr(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_spe_mfspefscr                     (rtx);
static inline rtx
gen_spe_mfspefscr(rtx ARG_UNUSED (a))
{
  return 0;
}
static inline rtx gen_e500_flip_gt_bit                  (rtx, rtx);
static inline rtx
gen_e500_flip_gt_bit(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_cmpsfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpsfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpsflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpsflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstsflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstsflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmpdflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmpdflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tstdflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tstdflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmptfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmptfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tsttfeq_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tsttfeq_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmptfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmptfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tsttfgt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tsttfgt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_cmptflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_cmptflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_tsttflt_gpr                       (rtx, rtx, rtx);
static inline rtx
gen_tsttflt_gpr(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_e500_cr_ior_compare               (rtx, rtx, rtx);
static inline rtx
gen_e500_cr_ior_compare(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_movsd_hardfloat                   (rtx, rtx);
extern rtx        gen_movsd_softfloat                   (rtx, rtx);
extern rtx        gen_movsd_store                       (rtx, rtx);
extern rtx        gen_movsd_load                        (rtx, rtx);
extern rtx        gen_extendsddd2                       (rtx, rtx);
extern rtx        gen_truncddsd2                        (rtx, rtx);
extern rtx        gen_extendddtd2                       (rtx, rtx);
extern rtx        gen_trunctddd2                        (rtx, rtx);
extern rtx        gen_adddd3                            (rtx, rtx, rtx);
extern rtx        gen_addtd3                            (rtx, rtx, rtx);
extern rtx        gen_subdd3                            (rtx, rtx, rtx);
extern rtx        gen_subtd3                            (rtx, rtx, rtx);
extern rtx        gen_muldd3                            (rtx, rtx, rtx);
extern rtx        gen_multd3                            (rtx, rtx, rtx);
extern rtx        gen_divdd3                            (rtx, rtx, rtx);
extern rtx        gen_divtd3                            (rtx, rtx, rtx);
extern rtx        gen_floatditd2                        (rtx, rtx);
extern rtx        gen_ftruncdd2                         (rtx, rtx);
extern rtx        gen_fixdddi2                          (rtx, rtx);
extern rtx        gen_ftrunctd2                         (rtx, rtx);
extern rtx        gen_fixtddi2                          (rtx, rtx);
static inline rtx gen_paired_negv2sf2                   (rtx, rtx);
static inline rtx
gen_paired_negv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sqrtv2sf2                         (rtx, rtx);
static inline rtx
gen_sqrtv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_paired_absv2sf2                   (rtx, rtx);
static inline rtx
gen_paired_absv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_nabsv2sf2                         (rtx, rtx);
static inline rtx
gen_nabsv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_paired_addv2sf3                   (rtx, rtx, rtx);
static inline rtx
gen_paired_addv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_subv2sf3                   (rtx, rtx, rtx);
static inline rtx
gen_paired_subv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_mulv2sf3                   (rtx, rtx, rtx);
static inline rtx
gen_paired_mulv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_resv2sf2                          (rtx, rtx);
static inline rtx
gen_resv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_paired_divv2sf3                   (rtx, rtx, rtx);
static inline rtx
gen_paired_divv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_madds0                     (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_madds0(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_madds1                     (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_madds1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_madd                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_madd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_msub                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_msub(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_nmadd                      (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_nmadd(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_nmsub                      (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_nmsub(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_selv2sf4                          (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_selv2sf4(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
static inline rtx gen_paired_stx                        (rtx, rtx);
static inline rtx
gen_paired_stx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_paired_lx                         (rtx, rtx);
static inline rtx
gen_paired_lx(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_paired_cmpu0                      (rtx, rtx, rtx);
static inline rtx
gen_paired_cmpu0(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_cmpu1                      (rtx, rtx, rtx);
static inline rtx
gen_paired_cmpu1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_merge00                    (rtx, rtx, rtx);
static inline rtx
gen_paired_merge00(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_merge01                    (rtx, rtx, rtx);
static inline rtx
gen_paired_merge01(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_merge10                    (rtx, rtx, rtx);
static inline rtx
gen_paired_merge10(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_merge11                    (rtx, rtx, rtx);
static inline rtx
gen_paired_merge11(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_sum0                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_sum0(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_sum1                       (rtx, rtx, rtx, rtx);
static inline rtx
gen_paired_sum1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_paired_muls0                      (rtx, rtx, rtx);
static inline rtx
gen_paired_muls0(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_paired_muls1                      (rtx, rtx, rtx);
static inline rtx
gen_paired_muls1(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_macho_high                        (rtx, rtx);
static inline rtx
gen_macho_high(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_macho_low                         (rtx, rtx, rtx);
static inline rtx
gen_macho_low(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_load_macho_picbase                (rtx);
extern rtx        gen_macho_correct_pic                 (rtx, rtx, rtx, rtx);
extern rtx        gen_zero_extendqidi2                  (rtx, rtx);
extern rtx        gen_zero_extendhidi2                  (rtx, rtx);
extern rtx        gen_zero_extendsidi2                  (rtx, rtx);
extern rtx        gen_extendhidi2                       (rtx, rtx);
extern rtx        gen_extendsidi2                       (rtx, rtx);
extern rtx        gen_zero_extendqisi2                  (rtx, rtx);
extern rtx        gen_extendqisi2                       (rtx, rtx);
static inline rtx gen_extendqisi2_power                 (rtx, rtx);
static inline rtx
gen_extendqisi2_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendqisi2_no_power              (rtx, rtx);
extern rtx        gen_zero_extendqihi2                  (rtx, rtx);
extern rtx        gen_extendqihi2                       (rtx, rtx);
static inline rtx gen_extendqihi2_power                 (rtx, rtx);
static inline rtx
gen_extendqihi2_power(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendqihi2_no_power              (rtx, rtx);
extern rtx        gen_zero_extendhisi2                  (rtx, rtx);
extern rtx        gen_extendhisi2                       (rtx, rtx);
extern rtx        gen_strlensi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3                            (rtx, rtx, rtx);
extern rtx        gen_adddi3                            (rtx, rtx, rtx);
extern rtx        gen_subsi3                            (rtx, rtx, rtx);
extern rtx        gen_subdi3                            (rtx, rtx, rtx);
extern rtx        gen_sminsi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                           (rtx, rtx, rtx);
extern rtx        gen_uminsi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxsi3                           (rtx, rtx, rtx);
extern rtx        gen_abssi2                            (rtx, rtx);
extern rtx        gen_negsi2                            (rtx, rtx);
extern rtx        gen_negdi2                            (rtx, rtx);
extern rtx        gen_ctzsi2                            (rtx, rtx);
extern rtx        gen_ctzdi2                            (rtx, rtx);
extern rtx        gen_ffssi2                            (rtx, rtx);
extern rtx        gen_ffsdi2                            (rtx, rtx);
extern rtx        gen_popcountsi2                       (rtx, rtx);
extern rtx        gen_popcountdi2                       (rtx, rtx);
extern rtx        gen_paritysi2                         (rtx, rtx);
extern rtx        gen_paritydi2                         (rtx, rtx);
extern rtx        gen_bswaphi2                          (rtx, rtx);
extern rtx        gen_bswapsi2                          (rtx, rtx);
extern rtx        gen_bswapdi2                          (rtx, rtx);
extern rtx        gen_mulsi3                            (rtx, rtx, rtx);
extern rtx        gen_divmodsi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_udivsi3                           (rtx, rtx, rtx);
extern rtx        gen_udivdi3                           (rtx, rtx, rtx);
extern rtx        gen_divsi3                            (rtx, rtx, rtx);
extern rtx        gen_divdi3                            (rtx, rtx, rtx);
extern rtx        gen_modsi3                            (rtx, rtx, rtx);
extern rtx        gen_moddi3                            (rtx, rtx, rtx);
static inline rtx gen_udivmodsi4_normal                 (rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmodsi4_normal(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d))
{
  return 0;
}
static inline rtx gen_udivmodsi4_tests                  (rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_udivmodsi4_tests(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e))
{
  return 0;
}
extern rtx        gen_udivmodsi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                            (rtx, rtx, rtx);
extern rtx        gen_iorsi3                            (rtx, rtx, rtx);
extern rtx        gen_xorsi3                            (rtx, rtx, rtx);
extern rtx        gen_insv                              (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                           (rtx, rtx, rtx);
extern rtx        gen_extendsfdf2                       (rtx, rtx);
extern rtx        gen_truncdfsf2                        (rtx, rtx);
extern rtx        gen_negsf2                            (rtx, rtx);
extern rtx        gen_abssf2                            (rtx, rtx);
extern rtx        gen_addsf3                            (rtx, rtx, rtx);
extern rtx        gen_subsf3                            (rtx, rtx, rtx);
extern rtx        gen_mulsf3                            (rtx, rtx, rtx);
extern rtx        gen_divsf3                            (rtx, rtx, rtx);
extern rtx        gen_recipsf3                          (rtx, rtx, rtx);
extern rtx        gen_sqrtsf2                           (rtx, rtx);
extern rtx        gen_rsqrtsf2                          (rtx, rtx);
extern rtx        gen_copysignsf3                       (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                       (rtx, rtx, rtx);
extern rtx        gen_smaxsf3                           (rtx, rtx, rtx);
extern rtx        gen_sminsf3                           (rtx, rtx, rtx);
extern rtx        gen_movsicc                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                           (rtx, rtx, rtx, rtx);
extern rtx        gen_negdf2                            (rtx, rtx);
extern rtx        gen_absdf2                            (rtx, rtx);
extern rtx        gen_adddf3                            (rtx, rtx, rtx);
extern rtx        gen_subdf3                            (rtx, rtx, rtx);
extern rtx        gen_muldf3                            (rtx, rtx, rtx);
extern rtx        gen_divdf3                            (rtx, rtx, rtx);
extern rtx        gen_recipdf3                          (rtx, rtx, rtx);
extern rtx        gen_fred                              (rtx, rtx);
extern rtx        gen_sqrtdf2                           (rtx, rtx);
extern rtx        gen_smaxdf3                           (rtx, rtx, rtx);
extern rtx        gen_smindf3                           (rtx, rtx, rtx);
extern rtx        gen_movdfcc                           (rtx, rtx, rtx, rtx);
static inline rtx gen_fixuns_truncsfsi2                 (rtx, rtx);
static inline rtx
gen_fixuns_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fix_truncsfsi2                    (rtx, rtx);
static inline rtx
gen_fix_truncsfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_fixuns_truncdfsi2                 (rtx, rtx);
static inline rtx
gen_fixuns_truncdfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_fixuns_truncdfdi2                 (rtx, rtx);
extern rtx        gen_floatsidf2                        (rtx, rtx);
static inline rtx gen_floatunssisf2                     (rtx, rtx);
static inline rtx
gen_floatunssisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatunssidf2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                    (rtx, rtx);
extern rtx        gen_btruncdf2                         (rtx, rtx);
extern rtx        gen_ceildf2                           (rtx, rtx);
extern rtx        gen_floordf2                          (rtx, rtx);
extern rtx        gen_ftruncdf2                         (rtx, rtx);
static inline rtx gen_floatsisf2                        (rtx, rtx);
static inline rtx
gen_floatsisf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_floatdidf2                        (rtx, rtx);
extern rtx        gen_floatunsdidf2                     (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                    (rtx, rtx);
extern rtx        gen_floatdisf2                        (rtx, rtx);
extern rtx        gen_floatdisf2_internal2              (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                          (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                         (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                  (rtx, rtx, rtx);
extern rtx        gen_absdi2                            (rtx, rtx);
extern rtx        gen_ashldi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                           (rtx, rtx, rtx);
extern rtx        gen_anddi3                            (rtx, rtx, rtx);
extern rtx        gen_iordi3                            (rtx, rtx, rtx);
extern rtx        gen_xordi3                            (rtx, rtx, rtx);
extern rtx        gen_smindi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                           (rtx, rtx, rtx);
extern rtx        gen_umindi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxdi3                           (rtx, rtx, rtx);
extern rtx        gen_movsi_got                         (rtx, rtx);
extern rtx        gen_movqi                             (rtx, rtx);
extern rtx        gen_movhi                             (rtx, rtx);
extern rtx        gen_movsi                             (rtx, rtx);
extern rtx        gen_movdi                             (rtx, rtx);
extern rtx        gen_movti                             (rtx, rtx);
extern rtx        gen_movcc                             (rtx, rtx);
extern rtx        gen_movsf                             (rtx, rtx);
extern rtx        gen_movdf                             (rtx, rtx);
extern rtx        gen_movtf                             (rtx, rtx);
extern rtx        gen_extenddftf2                       (rtx, rtx);
extern rtx        gen_extenddftf2_fprs                  (rtx, rtx);
extern rtx        gen_extendsftf2                       (rtx, rtx);
extern rtx        gen_trunctfdf2                        (rtx, rtx);
extern rtx        gen_trunctfsf2                        (rtx, rtx);
extern rtx        gen_floatsitf2                        (rtx, rtx);
extern rtx        gen_fix_trunctfsi2                    (rtx, rtx);
extern rtx        gen_fix_trunctfsi2_fprs               (rtx, rtx);
extern rtx        gen_negtf2                            (rtx, rtx);
extern rtx        gen_abstf2                            (rtx, rtx);
extern rtx        gen_abstf2_internal                   (rtx, rtx, rtx);
extern rtx        gen_load_multiple                     (rtx, rtx, rtx);
extern rtx        gen_store_multiple                    (rtx, rtx, rtx);
extern rtx        gen_setmemsi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_8reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_6reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_4reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_2reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi_1reg                     (rtx, rtx, rtx, rtx);
extern rtx        gen_allocate_stack                    (rtx, rtx);
extern rtx        gen_save_stack_function               (rtx, rtx);
extern rtx        gen_restore_stack_function            (rtx, rtx);
extern rtx        gen_restore_stack_block               (rtx, rtx);
extern rtx        gen_save_stack_nonlocal               (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal            (rtx, rtx);
extern rtx        gen_builtin_setjmp_receiver           (rtx);
extern rtx        gen_call_indirect_aix32               (rtx, rtx);
extern rtx        gen_call_indirect_aix64               (rtx, rtx);
extern rtx        gen_call_value_indirect_aix32         (rtx, rtx, rtx);
extern rtx        gen_call_value_indirect_aix64         (rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern rtx        gen_call                              (rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                        (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                      (rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C))
extern rtx        gen_sibcall                           (rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value                     (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_epilogue                  (void);
extern rtx        gen_cbranchsi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdd4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtd4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoretf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredd4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoretd4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_stack_protect_set                 (rtx, rtx);
extern rtx        gen_stack_protect_test                (rtx, rtx, rtx);
extern rtx        gen_indirect_jump                     (rtx);
extern rtx        gen_tablejump                         (rtx, rtx);
extern rtx        gen_tablejumpsi                       (rtx, rtx);
extern rtx        gen_tablejumpdi                       (rtx, rtx);
extern rtx        gen_doloop_end                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_ctrsi                             (rtx, rtx);
extern rtx        gen_ctrdi                             (rtx, rtx);
extern rtx        gen_ctrapsi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_prologue                          (void);
extern rtx        gen_epilogue                          (void);
extern rtx        gen_movsi_to_cr_one                   (rtx, rtx);
extern rtx        gen_eh_return                         (rtx);
extern rtx        gen_memory_barrier                    (void);
extern rtx        gen_sync_compare_and_swaphi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_compare_and_swapqi           (rtx, rtx, rtx, rtx);
extern rtx        gen_sync_addqi                        (rtx, rtx);
extern rtx        gen_sync_subqi                        (rtx, rtx);
extern rtx        gen_sync_iorqi                        (rtx, rtx);
extern rtx        gen_sync_xorqi                        (rtx, rtx);
extern rtx        gen_sync_andqi                        (rtx, rtx);
extern rtx        gen_sync_addhi                        (rtx, rtx);
extern rtx        gen_sync_subhi                        (rtx, rtx);
extern rtx        gen_sync_iorhi                        (rtx, rtx);
extern rtx        gen_sync_xorhi                        (rtx, rtx);
extern rtx        gen_sync_andhi                        (rtx, rtx);
extern rtx        gen_sync_addsi                        (rtx, rtx);
extern rtx        gen_sync_subsi                        (rtx, rtx);
extern rtx        gen_sync_iorsi                        (rtx, rtx);
extern rtx        gen_sync_xorsi                        (rtx, rtx);
extern rtx        gen_sync_andsi                        (rtx, rtx);
extern rtx        gen_sync_adddi                        (rtx, rtx);
extern rtx        gen_sync_subdi                        (rtx, rtx);
extern rtx        gen_sync_iordi                        (rtx, rtx);
extern rtx        gen_sync_xordi                        (rtx, rtx);
extern rtx        gen_sync_anddi                        (rtx, rtx);
extern rtx        gen_sync_nandqi                       (rtx, rtx);
extern rtx        gen_sync_nandhi                       (rtx, rtx);
extern rtx        gen_sync_nandsi                       (rtx, rtx);
extern rtx        gen_sync_nanddi                       (rtx, rtx);
extern rtx        gen_sync_old_addqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_addhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_addsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_andsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_adddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_subdi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_iordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_xordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_anddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nandsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_old_nanddi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_addqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andqi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_addhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andhi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_addsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xorsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_andsi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_adddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_subdi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_iordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_xordi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_anddi                    (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandqi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandhi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nandsi                   (rtx, rtx, rtx);
extern rtx        gen_sync_new_nanddi                   (rtx, rtx, rtx);
extern rtx        gen_sync_lock_releaseqi               (rtx, rtx);
extern rtx        gen_sync_lock_releasehi               (rtx, rtx);
extern rtx        gen_sync_lock_releasesi               (rtx, rtx);
extern rtx        gen_sync_lock_releasedi               (rtx, rtx);
extern rtx        gen_sync_lock_releaseti               (rtx, rtx);
extern rtx        gen_movv16qi                          (rtx, rtx);
extern rtx        gen_movv8hi                           (rtx, rtx);
extern rtx        gen_movv4si                           (rtx, rtx);
extern rtx        gen_movv2di                           (rtx, rtx);
extern rtx        gen_movv4sf                           (rtx, rtx);
extern rtx        gen_movv2df                           (rtx, rtx);
extern rtx        gen_vector_load_v16qi                 (rtx, rtx);
extern rtx        gen_vector_load_v8hi                  (rtx, rtx);
extern rtx        gen_vector_load_v4si                  (rtx, rtx);
extern rtx        gen_vector_load_v2di                  (rtx, rtx);
extern rtx        gen_vector_load_v4sf                  (rtx, rtx);
extern rtx        gen_vector_load_v2df                  (rtx, rtx);
extern rtx        gen_vector_store_v16qi                (rtx, rtx);
extern rtx        gen_vector_store_v8hi                 (rtx, rtx);
extern rtx        gen_vector_store_v4si                 (rtx, rtx);
extern rtx        gen_vector_store_v2di                 (rtx, rtx);
extern rtx        gen_vector_store_v4sf                 (rtx, rtx);
extern rtx        gen_vector_store_v2df                 (rtx, rtx);
extern rtx        gen_reload_v16qi_si_store             (rtx, rtx, rtx);
extern rtx        gen_reload_v8hi_si_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v4si_si_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v2di_si_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v4sf_si_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v2df_si_store              (rtx, rtx, rtx);
extern rtx        gen_reload_df_si_store                (rtx, rtx, rtx);
extern rtx        gen_reload_ti_si_store                (rtx, rtx, rtx);
extern rtx        gen_reload_v16qi_di_store             (rtx, rtx, rtx);
extern rtx        gen_reload_v8hi_di_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v4si_di_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v2di_di_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v4sf_di_store              (rtx, rtx, rtx);
extern rtx        gen_reload_v2df_di_store              (rtx, rtx, rtx);
extern rtx        gen_reload_df_di_store                (rtx, rtx, rtx);
extern rtx        gen_reload_ti_di_store                (rtx, rtx, rtx);
extern rtx        gen_reload_v16qi_si_load              (rtx, rtx, rtx);
extern rtx        gen_reload_v8hi_si_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v4si_si_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v2di_si_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v4sf_si_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v2df_si_load               (rtx, rtx, rtx);
extern rtx        gen_reload_df_si_load                 (rtx, rtx, rtx);
extern rtx        gen_reload_ti_si_load                 (rtx, rtx, rtx);
extern rtx        gen_reload_v16qi_di_load              (rtx, rtx, rtx);
extern rtx        gen_reload_v8hi_di_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v4si_di_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v2di_di_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v4sf_di_load               (rtx, rtx, rtx);
extern rtx        gen_reload_v2df_di_load               (rtx, rtx, rtx);
extern rtx        gen_reload_df_di_load                 (rtx, rtx, rtx);
extern rtx        gen_reload_ti_di_load                 (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_addv2df3                          (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_subv2df3                          (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_mulv2df3                          (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_divv2df3                          (rtx, rtx, rtx);
extern rtx        gen_negv4sf2                          (rtx, rtx);
extern rtx        gen_negv2df2                          (rtx, rtx);
extern rtx        gen_absv4sf2                          (rtx, rtx);
extern rtx        gen_absv2df2                          (rtx, rtx);
extern rtx        gen_sminv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_sminv2df3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv2df3                         (rtx, rtx, rtx);
extern rtx        gen_sqrtv4sf2                         (rtx, rtx);
extern rtx        gen_sqrtv2df2                         (rtx, rtx);
extern rtx        gen_ftruncv4sf2                       (rtx, rtx);
extern rtx        gen_ftruncv2df2                       (rtx, rtx);
extern rtx        gen_vector_ceilv4sf2                  (rtx, rtx);
extern rtx        gen_vector_ceilv2df2                  (rtx, rtx);
extern rtx        gen_vector_floorv4sf2                 (rtx, rtx);
extern rtx        gen_vector_floorv2df2                 (rtx, rtx);
extern rtx        gen_vector_btruncv4sf2                (rtx, rtx);
extern rtx        gen_vector_btruncv2df2                (rtx, rtx);
extern rtx        gen_vector_copysignv4sf3              (rtx, rtx, rtx);
extern rtx        gen_vector_copysignv2df3              (rtx, rtx, rtx);
extern rtx        gen_vcondv4sf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2df                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hi                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4si                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4si                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vector_eqv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vector_eqv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vector_eqv4si                     (rtx, rtx, rtx);
extern rtx        gen_vector_eqv4sf                     (rtx, rtx, rtx);
extern rtx        gen_vector_eqv2df                     (rtx, rtx, rtx);
extern rtx        gen_vector_gtv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vector_gtv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vector_gtv4si                     (rtx, rtx, rtx);
extern rtx        gen_vector_gtv4sf                     (rtx, rtx, rtx);
extern rtx        gen_vector_gtv2df                     (rtx, rtx, rtx);
extern rtx        gen_vector_gev16qi                    (rtx, rtx, rtx);
extern rtx        gen_vector_gev8hi                     (rtx, rtx, rtx);
extern rtx        gen_vector_gev4si                     (rtx, rtx, rtx);
extern rtx        gen_vector_gev4sf                     (rtx, rtx, rtx);
extern rtx        gen_vector_gev2df                     (rtx, rtx, rtx);
extern rtx        gen_vector_gtuv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vector_gtuv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vector_gtuv4si                    (rtx, rtx, rtx);
extern rtx        gen_vector_geuv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vector_geuv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vector_geuv4si                    (rtx, rtx, rtx);
extern rtx        gen_vector_select_v16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v4sf                (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v2df                (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_ti                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v16qi_uns           (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v8hi_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v4si_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v2di_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v4sf_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_v2df_uns            (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_select_ti_uns              (rtx, rtx, rtx, rtx);
extern rtx        gen_vector_eq_v16qi_p                 (rtx, rtx, rtx);
extern rtx        gen_vector_eq_v8hi_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_eq_v4si_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_eq_v4sf_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_eq_v2df_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_gt_v16qi_p                 (rtx, rtx, rtx);
extern rtx        gen_vector_gt_v8hi_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_gt_v4si_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_gt_v4sf_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_gt_v2df_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_ge_v4sf_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_ge_v2df_p                  (rtx, rtx, rtx);
extern rtx        gen_vector_gtu_v16qi_p                (rtx, rtx, rtx);
extern rtx        gen_vector_gtu_v8hi_p                 (rtx, rtx, rtx);
extern rtx        gen_vector_gtu_v4si_p                 (rtx, rtx, rtx);
extern rtx        gen_cr6_test_for_zero                 (rtx);
extern rtx        gen_cr6_test_for_zero_reverse         (rtx);
extern rtx        gen_cr6_test_for_lt                   (rtx);
extern rtx        gen_cr6_test_for_lt_reverse           (rtx);
extern rtx        gen_xorv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                          (rtx, rtx, rtx);
extern rtx        gen_xorv2di3                          (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_xorv2df3                          (rtx, rtx, rtx);
extern rtx        gen_xorti3                            (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                          (rtx, rtx, rtx);
extern rtx        gen_iorv2di3                          (rtx, rtx, rtx);
extern rtx        gen_iorv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_iorv2df3                          (rtx, rtx, rtx);
extern rtx        gen_iorti3                            (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_andv4si3                          (rtx, rtx, rtx);
extern rtx        gen_andv2di3                          (rtx, rtx, rtx);
extern rtx        gen_andv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_andv2df3                          (rtx, rtx, rtx);
extern rtx        gen_andti3                            (rtx, rtx, rtx);
extern rtx        gen_one_cmplv16qi2                    (rtx, rtx);
extern rtx        gen_one_cmplv8hi2                     (rtx, rtx);
extern rtx        gen_one_cmplv4si2                     (rtx, rtx);
extern rtx        gen_one_cmplv2di2                     (rtx, rtx);
extern rtx        gen_one_cmplv4sf2                     (rtx, rtx);
extern rtx        gen_one_cmplv2df2                     (rtx, rtx);
extern rtx        gen_one_cmplti2                       (rtx, rtx);
extern rtx        gen_norv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_norv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_norv4si3                          (rtx, rtx, rtx);
extern rtx        gen_norv2di3                          (rtx, rtx, rtx);
extern rtx        gen_norv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_norv2df3                          (rtx, rtx, rtx);
extern rtx        gen_norti3                            (rtx, rtx, rtx);
extern rtx        gen_andcv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_andcv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_andcv4si3                         (rtx, rtx, rtx);
extern rtx        gen_andcv2di3                         (rtx, rtx, rtx);
extern rtx        gen_andcv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_andcv2df3                         (rtx, rtx, rtx);
extern rtx        gen_andcti3                           (rtx, rtx, rtx);
extern rtx        gen_floatv4siv4sf2                    (rtx, rtx);
extern rtx        gen_floatv2div2df2                    (rtx, rtx);
extern rtx        gen_unsigned_floatv4siv4sf2           (rtx, rtx);
extern rtx        gen_unsigned_floatv2div2df2           (rtx, rtx);
extern rtx        gen_fix_truncv4sfv4si2                (rtx, rtx);
extern rtx        gen_fix_truncv2dfv2di2                (rtx, rtx);
extern rtx        gen_fixuns_truncv4sfv4si2             (rtx, rtx);
extern rtx        gen_fixuns_truncv2dfv2di2             (rtx, rtx);
extern rtx        gen_vec_initv16qi                     (rtx, rtx);
extern rtx        gen_vec_initv8hi                      (rtx, rtx);
extern rtx        gen_vec_initv4si                      (rtx, rtx);
extern rtx        gen_vec_initv2di                      (rtx, rtx);
extern rtx        gen_vec_initv4sf                      (rtx, rtx);
extern rtx        gen_vec_initv2df                      (rtx, rtx);
extern rtx        gen_vec_setv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_extractv16qi                  (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4si                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2di                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sf                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2df                   (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv4sf           (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv4sf            (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv2di           (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv2df           (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv2di            (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv2df            (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2df               (rtx, rtx, rtx);
extern rtx        gen_vec_pack_sfix_trunc_v2df          (rtx, rtx, rtx);
extern rtx        gen_vec_pack_ufix_trunc_v2df          (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4sf               (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4sf               (rtx, rtx);
extern rtx        gen_vec_unpacks_float_hi_v4si         (rtx, rtx);
extern rtx        gen_vec_unpacks_float_lo_v4si         (rtx, rtx);
extern rtx        gen_vec_unpacku_float_hi_v4si         (rtx, rtx);
extern rtx        gen_vec_unpacku_float_lo_v4si         (rtx, rtx);
extern rtx        gen_vec_realign_load_v16qi            (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_realign_load_v4sf             (rtx, rtx, rtx, rtx);
extern rtx        gen_movmisalignv4si                   (rtx, rtx);
extern rtx        gen_movmisalignv4sf                   (rtx, rtx);
extern rtx        gen_movmisalignv2di                   (rtx, rtx);
extern rtx        gen_movmisalignv2df                   (rtx, rtx);
extern rtx        gen_vec_shl_v16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_shl_ti                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_ti                        (rtx, rtx, rtx);
extern rtx        gen_vrotlv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_vrotlv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_vrotlv4si3                        (rtx, rtx, rtx);
extern rtx        gen_vashlv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_vashlv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_vashlv4si3                        (rtx, rtx, rtx);
extern rtx        gen_vlshrv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3                        (rtx, rtx, rtx);
extern rtx        gen_vashrv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3                        (rtx, rtx, rtx);
static inline rtx gen_absv2sf2                          (rtx, rtx);
static inline rtx
gen_absv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_negv2sf2                          (rtx, rtx);
static inline rtx
gen_negv2sf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_addv2sf3                          (rtx, rtx, rtx);
static inline rtx
gen_addv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_subv2sf3                          (rtx, rtx, rtx);
static inline rtx
gen_subv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_mulv2sf3                          (rtx, rtx, rtx);
static inline rtx
gen_mulv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_divv2sf3                          (rtx, rtx, rtx);
static inline rtx
gen_divv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_vsx_tdivdf3_fg                    (rtx, rtx, rtx);
extern rtx        gen_vsx_tdivv4sf3_fg                  (rtx, rtx, rtx);
extern rtx        gen_vsx_tdivv2df3_fg                  (rtx, rtx, rtx);
extern rtx        gen_vsx_tdivdf3_fe                    (rtx, rtx, rtx);
extern rtx        gen_vsx_tdivv4sf3_fe                  (rtx, rtx, rtx);
extern rtx        gen_vsx_tdivv2df3_fe                  (rtx, rtx, rtx);
extern rtx        gen_vsx_tsqrtdf2_fg                   (rtx, rtx);
extern rtx        gen_vsx_tsqrtv4sf2_fg                 (rtx, rtx);
extern rtx        gen_vsx_tsqrtv2df2_fg                 (rtx, rtx);
extern rtx        gen_vsx_tsqrtdf2_fe                   (rtx, rtx);
extern rtx        gen_vsx_tsqrtv4sf2_fe                 (rtx, rtx);
extern rtx        gen_vsx_tsqrtv2df2_fe                 (rtx, rtx);
extern rtx        gen_vsx_fmadddf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmaddv4sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmaddv2df4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubdf4                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubv4sf4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fmsubv2df4                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmadddf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv4sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmaddv2df4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubdf4                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv4sf4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vsx_fnmsubv2df4                   (rtx, rtx, rtx, rtx);
extern rtx        gen_altivec_mulv4sf3                  (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                          (rtx, rtx, rtx);
extern rtx        gen_mulv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_altivec_copysign_v4sf3            (rtx, rtx, rtx);
extern rtx        gen_build_vector_mask_for_load        (rtx, rtx);
extern rtx        gen_absv4si2                          (rtx, rtx);
extern rtx        gen_absv8hi2                          (rtx, rtx);
extern rtx        gen_absv16qi2                         (rtx, rtx);
extern rtx        gen_altivec_absv4sf2                  (rtx, rtx);
extern rtx        gen_altivec_abss_v4si                 (rtx, rtx);
extern rtx        gen_altivec_abss_v8hi                 (rtx, rtx);
extern rtx        gen_altivec_abss_v16qi                (rtx, rtx);
extern rtx        gen_reduc_splus_v8hi                  (rtx, rtx);
extern rtx        gen_reduc_splus_v16qi                 (rtx, rtx);
extern rtx        gen_reduc_uplus_v16qi                 (rtx, rtx);
extern rtx        gen_negv4si2                          (rtx, rtx);
extern rtx        gen_negv8hi2                          (rtx, rtx);
extern rtx        gen_negv16qi2                         (rtx, rtx);
extern rtx        gen_udot_prodv8hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv16qi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sdot_prodv8hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_widen_usumv8hi3                   (rtx, rtx, rtx);
extern rtx        gen_widen_usumv16qi3                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv16qi3                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv8hi3                   (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v16qi              (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8hi               (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v16qi              (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8hi               (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v16qi              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8hi               (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v16qi              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8hi               (rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v8hi               (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4si               (rtx, rtx, rtx);
extern rtx        gen_altivec_negv4sf2                  (rtx, rtx);
extern rtx        gen_vec_extract_evenv4si              (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv4sf              (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv8hi              (rtx, rtx, rtx);
extern rtx        gen_vec_extract_evenv16qi             (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv4si               (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv4sf               (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv8hi               (rtx, rtx, rtx);
extern rtx        gen_vec_extract_oddv16qi              (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv4si           (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_highv16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv4si            (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_interleave_lowv16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_float_hi_v8hi         (rtx, rtx);
extern rtx        gen_vec_unpacks_float_lo_v8hi         (rtx, rtx);
extern rtx        gen_vec_unpacku_float_hi_v8hi         (rtx, rtx);
extern rtx        gen_vec_unpacku_float_lo_v8hi         (rtx, rtx);
static inline rtx gen_spe_fix_trunctfsi2                (rtx, rtx);
static inline rtx
gen_spe_fix_trunctfsi2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_spe_abstf2_cmp                    (rtx, rtx, rtx);
static inline rtx
gen_spe_abstf2_cmp(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_spe_abstf2_tst                    (rtx, rtx, rtx);
static inline rtx
gen_spe_abstf2_tst(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_movv2si                           (rtx, rtx);
static inline rtx
gen_movv2si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv1di                           (rtx, rtx);
static inline rtx
gen_movv1di(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv4hi                           (rtx, rtx);
static inline rtx
gen_movv4hi(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movv2sf                           (rtx, rtx);
static inline rtx
gen_movv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_movsd                             (rtx, rtx);
extern rtx        gen_extendsdtd2                       (rtx, rtx);
extern rtx        gen_negdd2                            (rtx, rtx);
extern rtx        gen_absdd2                            (rtx, rtx);
extern rtx        gen_movdd                             (rtx, rtx);
extern rtx        gen_negtd2                            (rtx, rtx);
extern rtx        gen_abstd2                            (rtx, rtx);
extern rtx        gen_movtd                             (rtx, rtx);
static inline rtx gen_vec_initv2sf                      (rtx, rtx);
static inline rtx
gen_vec_initv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_sminv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_sminv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_smaxv2sf3                         (rtx, rtx, rtx);
static inline rtx
gen_smaxv2sf3(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_reduc_smax_v2sf                   (rtx, rtx);
static inline rtx
gen_reduc_smax_v2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_reduc_smin_v2sf                   (rtx, rtx);
static inline rtx
gen_reduc_smin_v2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vec_interleave_highv2sf           (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_highv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_interleave_lowv2sf            (rtx, rtx, rtx);
static inline rtx
gen_vec_interleave_lowv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_extract_evenv2sf              (rtx, rtx, rtx);
static inline rtx
gen_vec_extract_evenv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_vec_extract_oddv2sf               (rtx, rtx, rtx);
static inline rtx
gen_vec_extract_oddv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
static inline rtx gen_reduc_splus_v2sf                  (rtx, rtx);
static inline rtx
gen_reduc_splus_v2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_movmisalignv2sf                   (rtx, rtx);
static inline rtx
gen_movmisalignv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_vcondv2sf                         (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_vcondv2sf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}

#endif /* GCC_INSN_FLAGS_H */

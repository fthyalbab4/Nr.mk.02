// rea decompile_all
// name: FUN_005e1dd0
// address: 0x5e1dd0
// body: available
// range: 0x5e1dd0-0x5e216f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e1e18 (push 0x5e2170 followed by fs-segment stack chaining); handler 0x5e2170 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 *puStack_1a8;
  undefined1 local_194;
  undefined1 local_193;
  undefined2 local_192;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined2 local_188;
  undefined1 local_184 [4];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined1 local_d8 [4];
  undefined1 local_d4 [8];
  undefined1 local_cc [200];

  puStack_1a8 = (undefined1 *)0x5e1df7;
  FUN_00408d1c(local_cc,&DAT_0041272c);
  puStack_1a8 = (undefined1 *)0x5e1e08;
  FUN_00408d1c(&local_194,&DAT_0041272c);
  puStack_1ac = &LAB_005e2170;
  uStack_1b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1b0;
  local_194 = 0;
  local_193 = 0;
  puStack_1a8 = &stack0xfffffffc;
  FUN_00407f0c(local_184,&DAT_005e218c);
  local_18e = 2;
  local_192 = 0x2c;
  local_190 = 0x2e;
  local_18c = 0x2f;
  FUN_00407f0c(local_180,L"M/d/yyyy");
  FUN_00407f0c(local_17c,L"dddd, MMMM dd, yyyy");
  local_18a = 0x3a;
  FUN_00407f0c(local_178,&DAT_005e21f0);
  FUN_00407f0c(local_174,&DAT_005e2204);
  FUN_00407f0c(local_16c,L"h:mm:ss AMPM");
  FUN_00407f0c(local_170,L"h:mm AMPM");
  FUN_00407f0c(local_168,PTR_DAT_0077d824);
  FUN_00407f0c(local_164,PTR_DAT_0077d828);
  FUN_00407f0c(local_160,PTR_DAT_0077d82c);
  FUN_00407f0c(local_15c,PTR_DAT_0077d830);
  FUN_00407f0c(local_158,PTR_DAT_0077d834);
  FUN_00407f0c(local_154,PTR_DAT_0077d838);
  FUN_00407f0c(local_150,PTR_DAT_0077d83c);
  FUN_00407f0c(local_14c,PTR_DAT_0077d840);
  FUN_00407f0c(local_148,PTR_DAT_0077d844);
  FUN_00407f0c(local_144,PTR_DAT_0077d848);
  FUN_00407f0c(local_140,PTR_DAT_0077d84c);
  FUN_00407f0c(local_13c,PTR_DAT_0077d850);
  FUN_00407f0c(local_138,L"January");
  FUN_00407f0c(local_134,L"February");
  FUN_00407f0c(local_130,L"March");
  FUN_00407f0c(local_12c,L"April");
  FUN_00407f0c(local_128,&DAT_005e22cc);
  FUN_00407f0c(local_124,L"June");
  FUN_00407f0c(local_120,L"July");
  FUN_00407f0c(local_11c,L"August");
  FUN_00407f0c(local_118,L"September");
  FUN_00407f0c(local_114,L"October");
  FUN_00407f0c(local_110,L"November");
  FUN_00407f0c(local_10c,L"December");
  FUN_00407f0c(local_108,PTR_DAT_0077d808);
  FUN_00407f0c(local_104,PTR_DAT_0077d80c);
  FUN_00407f0c(local_100,PTR_DAT_0077d810);
  FUN_00407f0c(local_fc,PTR_DAT_0077d814);
  FUN_00407f0c(local_f8,PTR_DAT_0077d818);
  FUN_00407f0c(local_f4,PTR_DAT_0077d81c);
  FUN_00407f0c(local_f0,PTR_DAT_0077d820);
  FUN_00407f0c(local_ec,L"Sunday");
  FUN_00407f0c(local_e8,L"Monday");
  FUN_00407f0c(local_e4,L"Tuesday");
  FUN_00407f0c(local_e0,L"Wednesday");
  FUN_00407f0c(local_dc,L"Thursday");
  FUN_00407f0c(local_d8,L"Friday");
  FUN_00407f0c(local_d4,L"Saturday");
  local_188 = 0x2c;
  FUN_00409084(local_cc,&local_194,&DAT_0041272c);
  FUN_00417d60(param_1,param_2,param_3,param_4,local_cc);
  *in_FS_OFFSET = uStack_1b0;
  puStack_1a8 = &LAB_005e2177;
  puStack_1ac = (undefined1 *)0x5e216f;
  FUN_00408e44(&local_194,&DAT_0041272c,2);
  return;
}

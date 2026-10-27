// rea decompile_all
// name: FUN_005baba8
// address: 0x5baba8
// body: available
// range: 0x5baba8-0x5bac71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5babc6 (push 0x5bac72 followed by fs-segment stack chaining); handler 0x5bac72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005baba8(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_6c = &stack0xfffffffc;
  local_5c = 0;
  local_8 = 0;
  puStack_70 = &LAB_005bac72;
  uStack_74 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_74;
  local_58 = *(undefined4 *)PTR_DAT_0078251c;
  uStack_54 = *(undefined4 *)(PTR_DAT_0078251c + 4);
  uStack_50 = *(undefined4 *)(PTR_DAT_0078251c + 8);
  uStack_4c = *(undefined4 *)(PTR_DAT_0078251c + 0xc);
  local_48 = *(undefined4 *)PTR_DAT_00781e50;
  uStack_44 = *(undefined4 *)(PTR_DAT_00781e50 + 4);
  uStack_40 = *(undefined4 *)(PTR_DAT_00781e50 + 8);
  uStack_3c = *(undefined4 *)(PTR_DAT_00781e50 + 0xc);
  local_38 = *(undefined4 *)PTR_DAT_00782370;
  uStack_34 = *(undefined4 *)(PTR_DAT_00782370 + 4);
  uStack_30 = *(undefined4 *)(PTR_DAT_00782370 + 8);
  uStack_2c = *(undefined4 *)(PTR_DAT_00782370 + 0xc);
  local_28 = *(undefined4 *)PTR_DAT_00781fb8;
  uStack_24 = *(undefined4 *)(PTR_DAT_00781fb8 + 4);
  uStack_20 = *(undefined4 *)(PTR_DAT_00781fb8 + 8);
  uStack_1c = *(undefined4 *)(PTR_DAT_00781fb8 + 0xc);
  local_18 = *(undefined4 *)PTR_DAT_00781774;
  uStack_14 = *(undefined4 *)(PTR_DAT_00781774 + 4);
  uStack_10 = *(undefined4 *)(PTR_DAT_00781774 + 8);
  uStack_c = *(undefined4 *)(PTR_DAT_00781774 + 0xc);
  FUN_005bab50(&local_58,4,&local_8);
  FUN_0040b184(param_1,local_8,&LAB_005bac80);
  if (*param_1 == 0) {
    FUN_0040b75c(PTR_PTR_007823c4,&local_5c);
    FUN_0041beb8(&PTR_LAB_005bfca8,1,local_5c);
    FUN_00406618();
  }
  puVar1 = puStack_6c;
  *in_FS_OFFSET = uStack_74;
  puStack_6c = &LAB_005bac79;
  puStack_70 = (undefined1 *)0x5bac69;
  thunk_FUN_00406e5c(&local_5c,uStack_74,puVar1);
  puStack_70 = (undefined1 *)0x5bac71;
  FUN_0040b140(&local_8);
  return;
}

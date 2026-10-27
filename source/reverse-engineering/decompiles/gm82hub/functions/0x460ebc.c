// rea decompile_all
// name: FUN_00460ebc
// address: 0x460ebc
// body: available
// range: 0x460ebc-0x46102a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x460f20 (push 0x46102b followed by fs-segment stack chaining); handler 0x46102b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460ebc(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  HENHMETAFILE pHVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 local_9a [104];
  LONG local_32;
  LONG local_2e;
  undefined4 local_2a;
  int local_26;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  ushort local_18;
  short local_12;
  BYTE *local_10;
  UINT local_c;
  int *local_8;

  puStack_ac = (undefined1 *)0x460ed7;
  local_c = param_3;
  local_8 = param_2;
  FUN_00460d58(param_1);
  puStack_ac = (undefined1 *)0x460ee7;
  (**(code **)(*local_8 + 0xc))(local_8,&local_26,0x16);
  if (local_26 == -0x65393229) {
    puStack_ac = (undefined1 *)0x460ef8;
    sVar3 = FUN_0045e618(&local_26);
    if (sVar3 == local_12) goto LAB_00460f03;
  }
  puStack_ac = (undefined1 *)0x460f03;
  FUN_0045d7bc();
LAB_00460f03:
  local_c = local_c - 0x16;
  puStack_ac = (undefined1 *)0x460f0f;
  local_10 = (BYTE *)FUN_00404324(local_c);
  iVar1 = *(int *)(param_1 + 0x28);
  puStack_b0 = &LAB_0046102b;
  uStack_b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b4;
  puStack_ac = &stack0xfffffffc;
  (**(code **)(*local_8 + 0xc))(local_8,local_10,local_c);
  *(ushort *)(*(int *)(param_1 + 0x28) + 0x18) = local_18;
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  iVar4 = MulDiv((int)local_1c - (int)local_20,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0xc) = iVar4;
  iVar4 = MulDiv((int)local_1a - (int)local_1e,0x9ec,(uint)local_18);
  *(int *)(iVar1 + 0x10) = iVar4;
  local_9a._100_4_ = 8;
  local_32 = 0;
  local_2e = 0;
  local_2a = 0;
  pHVar5 = SetWinMetaFileBits(local_c,local_10,(HDC)0x0,(METAFILEPICT *)(local_9a + 100));
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar5;
  if (pHVar5 == (HENHMETAFILE)0x0) {
    FUN_0045d7bc();
  }
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar1 + 8),100,(LPENHMETAHEADER)local_9a);
  local_9a._100_4_ = 8;
  local_32 = local_9a._32_4_;
  local_2e = local_9a._36_4_;
  local_2a = 0;
  DeleteEnhMetaFile(*(HENHMETAFILE *)(iVar1 + 8));
  pHVar5 = SetWinMetaFileBits(local_c,local_10,(HDC)0x0,(METAFILEPICT *)(local_9a + 100));
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar5;
  if (pHVar5 == (HENHMETAFILE)0x0) {
    FUN_0045d7bc();
  }
  puVar2 = puStack_ac;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *in_FS_OFFSET = uStack_b4;
  puStack_ac = &LAB_00461032;
  puStack_b0 = (undefined1 *)0x46102a;
  FUN_00404340(local_10,local_c,puVar2);
  return;
}

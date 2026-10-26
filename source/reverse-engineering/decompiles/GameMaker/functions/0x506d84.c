// rea decompile_all
// name: FUN_00506d84
// address: 0x506d84
// body: available
// range: 0x506d84-0x506e15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506dad (push 0x506e33 followed by fs-segment stack chaining); handler 0x506e33 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506dca (push 0x506e16 followed by fs-segment stack chaining); handler 0x506e16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506d84(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x506d9f;
  uVar2 = FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_24 = &LAB_00506e33;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x506dbc;
  puStack_20 = &stack0xfffffffc;
  uVar3 = FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_30 = &LAB_00506e16;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00506a04(param_1);
  hbmMask = (HBITMAP)FUN_00506bdc(param_1,param_3,uVar3);
  hbmImage = (HBITMAP)FUN_00506bdc(param_1,param_2,uVar2);
  ImageList_Add(*(HIMAGELIST *)(param_1 + 0x40),hbmImage,hbmMask);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00506e1d;
  puStack_30 = (undefined1 *)0x506e15;
  FUN_00405a7c(uVar3,uStack_34,puVar1);
  return;
}

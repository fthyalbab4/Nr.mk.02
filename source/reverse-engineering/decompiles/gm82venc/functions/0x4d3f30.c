// rea decompile_all
// name: FUN_004d3f30
// address: 0x4d3f30
// body: available
// range: 0x4d3f30-0x4d3ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3f4f (push 0x4d4042 followed by fs-segment stack chaining); handler 0x4d4042 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3f6c (push 0x4d4019 followed by fs-segment stack chaining); handler 0x4d4019 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3f89 (push 0x4d3ffc followed by fs-segment stack chaining); handler 0x4d3ffc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3f30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  HBITMAP hbmMask;
  HBITMAP hbmImage;
  HIMAGELIST himl;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_004d4042;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x4d3f5e;
  local_8 = param_1;
  local_c = FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_30 = &LAB_004d4019;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x4d3f7b;
  puStack_2c = &stack0xfffffffc;
  local_10 = FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_3c = &LAB_004d3ffc;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  if (*(int *)(local_8 + 0x40) != 0) {
    puStack_38 = &stack0xfffffffc;
    hbmMask = (HBITMAP)FUN_004d3a58(local_8,param_4,local_10);
    hbmImage = (HBITMAP)FUN_004d3a58(local_8,param_3,local_c);
    himl = (HIMAGELIST)FUN_004d3a48(local_8);
    BVar2 = ImageList_Replace(himl,param_2,hbmImage,hbmMask);
    if (BVar2 == 0) {
      FUN_0040b9d0(PTR_LAB_00688b14,&local_14);
      FUN_0041bd4c(&LAB_0042dc24,1,local_14);
      FUN_00406ab4();
    }
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004d4003;
  puStack_3c = (undefined1 *)0x4d3ffb;
  FUN_00405fdc(local_10,uStack_40,puVar1);
  return;
}

// rea decompile_all
// name: FUN_004d3ccc
// address: 0x4d3ccc
// body: available
// range: 0x4d3ccc-0x4d3d8c inclusive
// range: 0x4d3d94-0x4d3dca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3cf5 (push 0x4d3dcb followed by fs-segment stack chaining); handler 0x4d3dcb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d3d28 (push 0x4d3d8d followed by fs-segment stack chaining); handler 0x4d3d8d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3ccc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  HBITMAP pHVar4;
  HBITMAP pHVar5;
  HIMAGELIST himl;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puVar7 = &stack0xfffffffc;
  puStack_20 = (undefined1 *)0x4d3ce7;
  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  puStack_24 = &LAB_004d3dcb;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)(param_1 + 0x45) != '\0') && (param_3 != -1)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_004645e8(piVar2,param_3);
    FUN_004d3880(param_1);
    uVar3 = (**(code **)(*piVar2 + 0x74))();
    pHVar4 = (HBITMAP)FUN_004d3a38(param_1,uVar3);
    pHVar5 = (HBITMAP)FUN_004d3a58(param_1,param_2,uVar1);
    ImageList_Add(*(HIMAGELIST *)(param_1 + 0x40),pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00405fdc(piVar2,uVar6,puVar7);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  puStack_20 = &stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_004d3a58(param_1,param_2,uVar1);
  himl = (HIMAGELIST)FUN_004d3a48(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  puVar7 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004d3dd2;
  puStack_24 = (undefined1 *)0x4d3dca;
  FUN_00405fdc(uVar1,uStack_28,puVar7);
  return;
}

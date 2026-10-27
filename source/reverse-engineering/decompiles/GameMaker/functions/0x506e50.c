// rea decompile_all
// name: FUN_00506e50
// address: 0x506e50
// body: available
// range: 0x506e50-0x506f10 inclusive
// range: 0x506f18-0x506f4e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506e79 (push 0x506f4f followed by fs-segment stack chaining); handler 0x506f4f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506eac (push 0x506f11 followed by fs-segment stack chaining); handler 0x506f11 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506e50(int param_1,undefined4 param_2,int param_3)

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
  puStack_20 = (undefined1 *)0x506e6b;
  uVar1 = FUN_00462144(&PTR_FUN_004587d4,1);
  puStack_24 = &LAB_00506f4f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((*(char *)(param_1 + 0x45) != '\0') && (param_3 != -1)) {
    puStack_20 = &stack0xfffffffc;
    piVar2 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    uVar6 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffcc;
    (**(code **)(*piVar2 + 8))(piVar2,param_2);
    FUN_00463f28(piVar2,param_3);
    FUN_00506a04(param_1);
    uVar3 = (**(code **)(*piVar2 + 0x74))();
    pHVar4 = (HBITMAP)FUN_00506bbc(param_1,uVar3);
    pHVar5 = (HBITMAP)FUN_00506bdc(param_1,param_2,uVar1);
    ImageList_Add(*(HIMAGELIST *)(param_1 + 0x40),pHVar5,pHVar4);
    *in_FS_OFFSET = uVar6;
    FUN_00405a7c(piVar2,uVar6,puVar7);
    return;
  }
  pHVar5 = (HBITMAP)0x0;
  puStack_20 = &stack0xfffffffc;
  pHVar4 = (HBITMAP)FUN_00506bdc(param_1,param_2,uVar1);
  himl = (HIMAGELIST)FUN_00506bcc(param_1);
  ImageList_Add(himl,pHVar4,pHVar5);
  puVar7 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00506f56;
  puStack_24 = (undefined1 *)0x506f4e;
  FUN_00405a7c(uVar1,uStack_28,puVar7);
  return;
}

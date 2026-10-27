// rea decompile_all
// name: FUN_004656d4
// address: 0x4656d4
// body: available
// range: 0x4656d4-0x465811 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4656ef (push 0x465812 followed by fs-segment stack chaining); handler 0x465812 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004656d4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  HBITMAP hbm;
  HDC hdc;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  LPVOID apvStackY_17f4 [1503];
  UINT start;
  UINT cLines;
  LPVOID pvVar9;
  tagBITMAPINFO *lpbmi;
  UINT usage;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  tagBITMAPINFO local_44;
  undefined4 local_18;
  LPVOID apvStack_14 [4];

  bVar8 = 0;
  puStack_54 = &stack0xfffffffc;
  apvStack_14[3] = (LPVOID)0x0;
  puStack_58 = &LAB_00465812;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  FUN_0043d4f4(*(undefined4 *)(param_1 + 0x34));
  *(undefined1 *)(param_1 + 0x4d) = 1;
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(char *)(iVar3 + 0x39) == '\x01') {
    puVar7 = (undefined4 *)(PTR_DAT_00688c70 + (uint)bVar8 * -8 + 4);
    local_18 = *(undefined4 *)PTR_DAT_00688c70;
    apvStack_14[(uint)bVar8 * -2] = (LPVOID)*puVar7;
    apvStack_14[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = (LPVOID)puVar7[(uint)bVar8 * -2 + 1];
    (apvStack_14 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
         (LPVOID)(puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    puVar6 = PTR_DAT_00688c70;
  }
  else {
    puVar7 = (undefined4 *)(PTR_DAT_00688878 + (uint)bVar8 * -8 + 4);
    local_18 = *(undefined4 *)PTR_DAT_00688878;
    apvStack_14[(uint)bVar8 * -2] = (LPVOID)*puVar7;
    apvStack_14[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = (LPVOID)puVar7[(uint)bVar8 * -2 + 1];
    (apvStack_14 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
         (LPVOID)(puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    puVar6 = PTR_DAT_00688878;
  }
  FUN_00464480(iVar3,CONCAT31((int3)((uint)puVar6 >> 8),7));
  uVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x30))();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x24))();
  *(int *)(param_1 + 0x2c) = iVar3;
  FUN_00409dfc(apvStack_14 + 3,&DAT_004656a4,1,*(int *)(param_1 + 0x28) * 4 * iVar3);
  FUN_00404f38(&local_44,0x2c,0);
  local_44.bmiHeader.biSize = 0x2c;
  local_44.bmiHeader.biWidth = *(LONG *)(param_1 + 0x28);
  local_44.bmiHeader.biHeight = -*(int *)(param_1 + 0x2c);
  local_44.bmiHeader.biPlanes = 1;
  local_44.bmiHeader.biBitCount = 0x20;
  usage = 0;
  lpbmi = &local_44;
  cLines = *(UINT *)(param_1 + 0x2c);
  start = 0;
  pvVar9 = apvStack_14[3];
  hbm = (HBITMAP)(**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
  FUN_00463124(*(undefined4 *)(param_1 + 0x30));
  hdc = (HDC)FUN_0045d4ec();
  GetDIBits(hdc,hbm,start,cLines,pvVar9,lpbmi,usage);
  uVar4 = FUN_0040b268(param_1 + 0x38);
  pvVar9 = apvStack_14[3];
  uVar5 = FUN_00409c34(apvStack_14[3]);
  piVar1 = DAT_0068f100;
  iVar3 = *(int *)(param_1 + 0x28) * 4;
  puVar7 = &local_18;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*DAT_0068f100 + 0x50))();
  *in_FS_OFFSET = piVar1;
  FUN_00409e08(apvStack_14 + 3,&DAT_004656a4,uVar2,&LAB_00465819,puVar7,iVar3,uVar5,pvVar9,uVar4);
  return;
}

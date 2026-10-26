// rea decompile_all
// name: FUN_00621608
// address: 0x621608
// body: available
// range: 0x621608-0x621761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62162e (push 0x621762 followed by fs-segment stack chaining); handler 0x621762 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00621608(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7,double param_8,double param_9,
                 double param_10,double param_11,double param_12,double param_13,double param_14,
                 double param_15,double param_16,double param_17)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x62161e;
  local_8 = param_1;
  FUN_0040b2dc(param_1);
  puStack_1c = &LAB_00621762;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_0085b3c8 = (float)param_17;
  DAT_0085b3cc = (float)param_16;
  DAT_0085b3d0 = (float)*(double *)PTR_DAT_00689120;
  DAT_0085b3d8 = (float)param_9;
  DAT_0085b3dc = (float)param_8;
  DAT_0085b3e0 = (float)param_15;
  DAT_0085b3e4 = (float)param_14;
  DAT_0085b3e8 = (float)*(double *)PTR_DAT_00689120;
  DAT_0085b3f0 = (float)param_7;
  DAT_0085b3f4 = (float)param_8;
  DAT_0085b3f8 = (float)param_13;
  DAT_0085b3fc = (float)param_12;
  DAT_0085b400 = (float)*(double *)PTR_DAT_00689120;
  DAT_0085b404 = param_5;
  DAT_0085b408 = (float)param_7;
  DAT_0085b40c = (float)param_6;
  DAT_0085b410 = (float)param_11;
  DAT_0085b414 = (float)param_10;
  DAT_0085b418 = (float)*(double *)PTR_DAT_00689120;
  DAT_0085b41c = param_4;
  DAT_0085b420 = (float)param_9;
  DAT_0085b424 = (float)param_6;
  DAT_0085b3d4 = param_2;
  DAT_0085b3ec = param_3;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xfc))();
  uVar13 = 3;
  uVar12 = 0xe;
  uVar11 = 0;
  piVar10 = *(int **)PTR_DAT_00689570;
  (**(code **)(*piVar10 + 0xfc))();
  uVar8 = 0;
  piVar7 = *(int **)PTR_DAT_00689570;
  uVar9 = local_8;
  (**(code **)(*piVar7 + 0xf4))();
  uVar6 = 0x142;
  piVar5 = *(int **)PTR_DAT_00689570;
  (**(code **)(*piVar5 + 0x130))();
  uVar4 = 0x18;
  puVar3 = &DAT_0085b3c8;
  uVar2 = 2;
  piVar1 = *(int **)PTR_DAT_00689570;
  (**(code **)(*piVar1 + 0x120))();
  *in_FS_OFFSET = piVar1;
  FUN_0040b268(&local_8,piVar1,uVar2,&LAB_00621769,puVar3,uVar4,piVar5,uVar6,piVar7,uVar8,uVar9,
               piVar10,uVar11,uVar12,uVar13);
  return;
}

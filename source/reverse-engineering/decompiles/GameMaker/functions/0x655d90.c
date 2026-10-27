// rea decompile_all
// name: FUN_00655d90
// address: 0x655d90
// body: available
// range: 0x655d90-0x655e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x655da4 (push 0x655e84 followed by fs-segment stack chaining); handler 0x655e84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655d90(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00655e84;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  if (((-1 < param_1) && (puVar2 = &stack0xfffffffc, param_1 < DAT_0077f2dc)) &&
     (puVar2 = &stack0xfffffffc, *(int *)(DAT_0077f2cc + param_1 * 4) != 0)) {
    puVar2 = &stack0xfffffffc;
    if ((*PTR_DAT_007815f8 == '\0') && (puVar2 = &stack0xfffffffc, *(int *)PTR_DAT_00782044 != 0)) {
      cVar3 = FUN_00416e40(*(undefined4 *)PTR_DAT_00782044);
      uVar5 = cVar3 == '\0';
      puVar2 = puStack_14;
      if (!(bool)uVar5) {
        FUN_0051acd0(*(undefined4 *)PTR_DAT_00781a58);
        FUN_00533aa8(*(undefined4 *)(*(int *)(DAT_0077f2cc + param_1 * 4) + 4),
                     *(undefined4 *)PTR_DAT_00782044,&local_8);
        FUN_0051acd8(*(undefined4 *)PTR_DAT_00781a58);
        iVar1 = *(int *)(DAT_0077f2cc + param_1 * 4);
        FUN_00408640(local_8,*(undefined4 *)(iVar1 + 4));
        puVar2 = puStack_14;
        if (!(bool)uVar5) {
          FUN_00407eb8(iVar1 + 4,local_8);
          FUN_00655ce8(param_1);
          puVar2 = puStack_14;
        }
        goto LAB_00655e6e;
      }
    }
    puStack_14 = puVar2;
    if (*(int *)(DAT_0077f2d0 + param_1 * 4) == 0) {
      uVar4 = FUN_00653d30(param_1);
      *(undefined4 *)(DAT_0077f2d0 + param_1 * 4) = uVar4;
      puVar2 = puStack_14;
    }
    else {
      FUN_004ee948();
      puVar2 = puStack_14;
    }
  }
LAB_00655e6e:
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00655e8b;
  puStack_18 = (undefined1 *)0x655e83;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}

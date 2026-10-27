// rea decompile_all
// name: FUN_004cf038
// address: 0x4cf038
// body: available
// range: 0x4cf038-0x4cf1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cf04d (push 0x4cf1b0 followed by fs-segment stack chaining); handler 0x4cf1b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf038(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  short *local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (short *)0x0;
  puStack_18 = &LAB_004cf1b0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar3 = FUN_004cefe4(param_1,&local_8);
  uVar3 = FUN_004cefe4(uVar3,&local_c,param_4);
  if (local_c == (short *)0x0) {
    piVar1 = *(int **)(*(int *)(param_4 + -8) + 0x8c);
    (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
  }
  else {
    psVar4 = (short *)FUN_00417110(local_8);
    if (*psVar4 != 0x5c) {
      FUN_004082dc(&local_8,&DAT_004cf1c8);
    }
    do {
      psVar4 = local_c;
      if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
        psVar4 = (short *)FUN_00407048(&local_c,local_c);
      }
      if (*psVar4 != 0x5c) {
        psVar4 = local_c;
        if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
          psVar4 = (short *)FUN_00407048(&local_c,local_c);
        }
        iVar5 = 0;
        if (psVar4 != (short *)0x0) {
          iVar5 = *(int *)(psVar4 + -2);
        }
        if (iVar5 < 4) {
          bVar6 = true;
        }
        else {
          psVar4 = local_c;
          if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
            psVar4 = (short *)FUN_00407048(&local_c,local_c);
          }
          bVar6 = psVar4[1] != 0x3a;
        }
        if (bVar6) {
          bVar6 = true;
        }
        else {
          psVar4 = local_c;
          if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
            psVar4 = (short *)FUN_00407048(&local_c,local_c);
          }
          bVar6 = psVar4[2] != 0x5c;
        }
        if (bVar6) {
          FUN_0040839c(&local_c,local_8,local_c);
        }
      }
      piVar1 = *(int **)(*(int *)(param_4 + -8) + 0x8c);
      (**(code **)(*piVar1 + 0x38))(piVar1,local_c);
      uVar3 = FUN_004cefe4(uVar3,&local_c);
    } while (local_c != (short *)0x0);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004cf1b7;
  puStack_18 = (undefined1 *)0x4cf1af;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}

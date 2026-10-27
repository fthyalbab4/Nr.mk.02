// rea decompile_all
// name: FUN_00416414
// address: 0x416414
// body: available
// range: 0x416414-0x4165ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x416435 (push 0x4165ad followed by fs-segment stack chaining); handler 0x4165ad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416414(short *param_1,char param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  short *local_8;

  puStack_1c = (undefined1 *)0x41642a;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = &LAB_004165ad;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  psVar4 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != (short *)0x0) && (puStack_1c = &stack0xfffffffc, local_8[-5] != 2)) {
    puStack_1c = &stack0xfffffffc;
    psVar4 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar6 = 0;
  if (psVar4 != (short *)0x0) {
    iVar6 = *(int *)(psVar4 + -2);
  }
  if (iVar6 == 0) {
    bVar1 = true;
  }
  else {
    psVar4 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      psVar4 = (short *)FUN_00407048(&local_8,local_8);
    }
    cVar3 = FUN_00410298(*psVar4);
    if ((cVar3 == '\0') && (*psVar4 != 0x5f)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (!bVar1) {
    if (param_2 == '\0') {
      psVar4 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar4 = (short *)FUN_00407048(&local_8,local_8);
      }
      iVar6 = 0;
      if (psVar4 != (short *)0x0) {
        iVar6 = *(int *)(psVar4 + -2);
      }
      if (1 < iVar6) {
        iVar6 = iVar6 + -1;
        iVar5 = 2;
        do {
          psVar4 = local_8;
          if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
            psVar4 = (short *)FUN_00407048(&local_8,local_8);
          }
          cVar3 = FUN_00410324(psVar4[iVar5 + -1]);
          if ((cVar3 == '\0') && (psVar4[iVar5 + -1] != 0x5f)) break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      psVar4 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar4 = (short *)FUN_00407048(&local_8,local_8);
      }
      iVar6 = 0;
      if (psVar4 != (short *)0x0) {
        iVar6 = *(int *)(psVar4 + -2);
      }
      if (1 < iVar6) {
        iVar6 = iVar6 + -1;
        iVar5 = 2;
        do {
          psVar4 = local_8;
          if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
            psVar4 = (short *)FUN_00407048(&local_8,local_8);
          }
          cVar3 = FUN_00410324(psVar4[iVar5 + -1]);
          if (((cVar3 == '\0') && (psVar4[iVar5 + -1] != 0x5f)) && (psVar4[iVar5 + -1] != 0x2e))
          break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004165b4;
  puStack_20 = (undefined1 *)0x4165ac;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar2);
  return;
}

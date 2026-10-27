// rea decompile_all
// name: FUN_00417124
// address: 0x417124
// body: available
// range: 0x417124-0x4172eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x417146 (push 0x4172ec followed by fs-segment stack chaining); handler 0x4172ec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417124(short *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  short *local_8;

  puStack_1c = (undefined1 *)0x41713b;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_004172ec;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  psVar2 = local_8;
  puStack_1c = &stack0xfffffffc;
  if ((local_8 != (short *)0x0) && (puStack_1c = &stack0xfffffffc, local_8[-5] != 2)) {
    puStack_1c = &stack0xfffffffc;
    psVar2 = (short *)FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (psVar2 != (short *)0x0) {
    iVar4 = *(int *)(psVar2 + -2);
  }
  if (iVar4 < 2) {
    bVar6 = false;
  }
  else {
    psVar2 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      psVar2 = (short *)FUN_00407488(&local_8,local_8);
    }
    bVar6 = psVar2[1] == 0x3a;
  }
  uStack_28 = param_2;
  if (bVar6) {
    FUN_00408984(local_8,1,2);
  }
  else {
    psVar2 = local_8;
    if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
      psVar2 = (short *)FUN_00407488(&local_8,local_8);
    }
    iVar4 = 0;
    if (psVar2 != (short *)0x0) {
      iVar4 = *(int *)(psVar2 + -2);
    }
    if (iVar4 < 2) {
      bVar6 = false;
    }
    else {
      psVar2 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar2 = (short *)FUN_00407488(&local_8,local_8);
      }
      bVar6 = *psVar2 == 0x5c;
    }
    if (bVar6) {
      psVar2 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar2 = (short *)FUN_00407488(&local_8,local_8);
      }
      bVar6 = psVar2[1] == 0x5c;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      iVar5 = 0;
      iVar4 = 3;
      while( true ) {
        FUN_00407498(&local_8);
        iVar3 = FUN_00408514();
        if ((iVar3 <= iVar4) || (1 < iVar5)) break;
        psVar2 = local_8;
        if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
          psVar2 = (short *)FUN_00407488(&local_8,local_8);
        }
        if (psVar2[iVar4 + -1] == 0x5c) {
          iVar5 = iVar5 + 1;
        }
        if (iVar5 < 2) {
          iVar4 = iVar4 + 1;
        }
      }
      psVar2 = local_8;
      if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
        psVar2 = (short *)FUN_00407488(&local_8,local_8);
      }
      if (psVar2[iVar4 + -1] == 0x5c) {
        iVar4 = iVar4 + -1;
      }
      FUN_00408984(local_8,1,iVar4);
    }
    else {
      uStack_28 = 0x4172d6;
      FUN_00408194(param_2,0);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004172f3;
  uStack_24 = 0x4172eb;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}

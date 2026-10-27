// rea decompile_all
// name: FUN_00446674
// address: 0x446674
// body: available
// range: 0x446674-0x44679a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x446694 (push 0x44679b followed by fs-segment stack chaining); handler 0x44679b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446674(undefined4 param_1,short *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  short *local_8;

  puStack_18 = (undefined1 *)0x446689;
  local_8 = param_2;
  FUN_00407660(param_2);
  puStack_1c = &LAB_0044679b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  bVar1 = false;
  psVar3 = local_8;
  puStack_18 = &stack0xfffffffc;
  if ((local_8 != (short *)0x0) && (puStack_18 = &stack0xfffffffc, local_8[-5] != 1)) {
    puStack_18 = &stack0xfffffffc;
    psVar3 = (short *)FUN_00407078(&local_8,local_8,0xfde9);
  }
  iVar4 = 0;
  if (psVar3 != (short *)0x0) {
    iVar4 = *(int *)(psVar3 + -2);
  }
  if (0 < iVar4) {
    local_c = 1;
    do {
      if (0x7f < *(byte *)((int)local_8 + local_c + -1)) {
        bVar1 = true;
        break;
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  psVar3 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 1)) {
    psVar3 = (short *)FUN_00407078(&local_8,local_8,0xfde9);
  }
  local_c = 0;
  if (psVar3 != (short *)0x0) {
    local_c = *(int *)(psVar3 + -2);
  }
  if (bVar1) {
    FUN_0044699c(param_1,0x14);
    FUN_00444438(param_1,&local_c,4);
    FUN_00444438(param_1,local_8,local_c);
  }
  else {
    if (local_c < 0x100) {
      FUN_0044699c(param_1,6);
      FUN_00444438(param_1,&local_c,1);
    }
    else {
      FUN_0044699c(param_1,0xc);
      FUN_00444438(param_1,&local_c,4);
    }
    FUN_00444438(param_1,local_8,local_c);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004467a2;
  puStack_1c = (undefined1 *)0x44679a;
  FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}

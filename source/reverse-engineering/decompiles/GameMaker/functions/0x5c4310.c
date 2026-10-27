// rea decompile_all
// name: FUN_005c4310
// address: 0x5c4310
// body: available
// range: 0x5c4310-0x5c441b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c433c (push 0x5c441c followed by fs-segment stack chaining); handler 0x5c441c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4310(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = (undefined1 *)0x5c4329;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = (undefined1 *)0x5c4331;
  thunk_FUN_00407660(local_c);
  puStack_20 = &LAB_005c441c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_28 = 0x5c434a;
  puStack_1c = &stack0xfffffffc;
  iVar3 = FUN_00408a68(local_8,local_c);
  iVar4 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    uStack_28 = 0x5c4369;
    iVar4 = FUN_00407048(&local_c,local_c);
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  if (iVar3 < 1) {
    uStack_28 = 0x5c4401;
    FUN_00407eb8(param_4,param_3);
  }
  else {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      uStack_28 = 0x5c4395;
      iVar4 = FUN_00407048(&local_8,local_8);
    }
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + -4);
    }
    for (iVar3 = iVar3 + iVar6; iVar3 < iVar5; iVar3 = iVar3 + 1) {
      iVar4 = FUN_00407058(&local_c);
      uStack_28 = 0x5c43b9;
      cVar2 = FUN_005c4300(*(undefined2 *)(iVar4 + -2 + iVar3 * 2));
      if (cVar2 != '\0') break;
    }
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      do {
        iVar4 = iVar4 + 1;
        if (iVar5 <= iVar4) break;
        iVar6 = FUN_00407058(&local_c);
        cVar2 = FUN_005c4300(*(undefined2 *)(iVar6 + -2 + iVar4 * 2));
      } while (cVar2 == '\0');
      uStack_28 = param_4;
      FUN_004086a8(local_c,iVar3 + 1,(iVar4 - iVar3) + -1);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c4423;
  uStack_24 = 0x5c441b;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}

// rea decompile_all
// name: FUN_00613cd4
// address: 0x613cd4
// body: available
// range: 0x613cd4-0x613d7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613cf2 (push 0x613d7b followed by fs-segment stack chaining); handler 0x613d7b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613cd4(undefined4 param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  uint extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined1 *puVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x613ce7;
  local_8 = param_2;
  FUN_00407660(param_2);
  puStack_18 = &LAB_00613d7b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = 0x7f;
  puVar5 = param_3;
  do {
    *puVar5 = 0xff;
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puStack_14 = &stack0xfffffffc;
  FUN_00407088(&local_8,0);
  iVar1 = FUN_00407220();
  if (0 < iVar1) {
    iVar2 = 1;
    do {
      uVar3 = iVar2 - 1;
      if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) <= uVar3)) {
        uVar3 = thunk_FUN_00404478();
        iVar4 = extraout_ECX;
        iVar1 = extraout_EDX;
      }
      iVar2 = uVar3 + 1;
      uVar3 = *(byte *)(iVar4 + -1 + iVar2) - 1;
      if (0x7e < uVar3) {
        iVar2 = thunk_FUN_00404478();
        uVar3 = extraout_ECX_00;
        iVar1 = extraout_EDX_00;
      }
      iVar4 = uVar3 + 1;
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        iVar2 = FUN_00405944();
        iVar4 = extraout_ECX_01;
        iVar1 = extraout_EDX_01;
      }
      if (0xff < uVar3) {
        iVar2 = thunk_FUN_00404478();
        iVar4 = extraout_ECX_02;
        iVar1 = extraout_EDX_02;
      }
      param_3[iVar4 + -1] = (char)uVar3;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  puVar5 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00613d82;
  puStack_18 = (undefined1 *)0x613d7a;
  FUN_00406e5c(&local_8,uStack_1c,puVar5);
  return;
}

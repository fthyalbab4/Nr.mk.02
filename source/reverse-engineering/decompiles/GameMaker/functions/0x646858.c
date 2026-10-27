// rea decompile_all
// name: FUN_00646858
// address: 0x646858
// body: available
// range: 0x646858-0x64692e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64686c (push 0x64692f followed by fs-segment stack chaining); handler 0x64692f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00646858(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0064692f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = FUN_0071b5fc();
  if (cVar2 == '\0') {
    FUN_004d43f8(L"This feature is only available in the Standard Edition.");
  }
  else {
    uVar3 = FUN_00701bf8(&DAT_00700d94,1);
    FUN_00407f0c(&local_8,0);
    cVar2 = FUN_0063b358(uVar3,&local_8);
    if (cVar2 == '\0') {
      FUN_00405a7c(uVar3);
    }
    else {
      FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,CONCAT22(extraout_var,0xfff5));
      FUN_00643eac(param_1);
      FUN_00644610(param_1);
      FUN_0070205c(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x704) + 4),
                   *(undefined4 *)(*(int *)(param_1 + 0x704) + 8),3);
      FUN_005b0a8c(*(undefined4 *)(param_1 + 0x704),uVar3);
      FUN_00405a7c(uVar3);
      FUN_00644e28(param_1);
      *(undefined1 *)(param_1 + 0x70d) = 1;
      FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00646936;
  puStack_18 = (undefined1 *)0x64692e;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}

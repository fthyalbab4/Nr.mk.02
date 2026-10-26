// rea decompile_all
// name: FUN_0074e9c4
// address: 0x74e9c4
// body: available
// range: 0x74e9c4-0x74eaa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74e9db (push 0x74eaaa followed by fs-segment stack chaining); handler 0x74eaaa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074e9c4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  bVar5 = true;
  puStack_1c = &LAB_0074eaaa;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00408640(*(undefined4 *)(param_1 + 0x14),param_2);
  if (!bVar5) {
    FUN_00405d08(param_1);
    FUN_00407eb8(param_1 + 0x14,param_2);
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0040810c(&local_8,*(undefined4 *)(param_1 + 0x14),0,0,param_1 + 0x1c,0xffffffff,
                   -(uint)(*(char *)(param_1 + 0x55) != '\0'));
      FUN_00407670(local_8);
      iVar3 = FUN_00732a30();
      if (iVar3 == 0) {
        DVar4 = GetLastError();
        if (DVar4 == 0) {
          *(undefined1 *)(param_1 + 100) = 2;
        }
        else if (DVar4 == 2) {
          *(undefined1 *)(param_1 + 100) = 4;
        }
        else {
          *(undefined1 *)(param_1 + 100) = 5;
        }
      }
      else {
        uVar2 = FUN_0074fae0(*(undefined4 *)(param_1 + 0x24));
        *(undefined1 *)(param_1 + 0x65) = uVar2;
        if (*(char *)(param_1 + 0x65) == '\0') {
          *(undefined1 *)(param_1 + 100) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 100) = 1;
          FUN_0074e6e8(param_1);
          FUN_00405d08(param_1);
        }
      }
      FUN_0074e65c(param_1);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0074eab1;
  puStack_1c = (undefined1 *)0x74eaa9;
  FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}

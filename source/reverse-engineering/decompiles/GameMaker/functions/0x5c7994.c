// rea decompile_all
// name: FUN_005c7994
// address: 0x5c7994
// body: available
// range: 0x5c7994-0x5c7a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c79b7 (push 0x5c7a4e followed by fs-segment stack chaining); handler 0x5c7a4e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7994(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005c7a4e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_3;
  uVar3 = FUN_005cb194(*(undefined4 *)(param_1 + 0x1c));
  if ((uVar3 & 8) != 0) {
    cVar2 = FUN_005c04d8(param_2);
    if (cVar2 == '\0') {
      FUN_005c7690(param_1,local_c,&local_8);
      uVar4 = local_8 == (int *)0x0;
      if (!(bool)uVar4) {
        (**(code **)(*local_8 + 0x34))(local_8,&local_10);
        FUN_00408640(local_10,L"xmlns");
        if (!(bool)uVar4) {
          (**(code **)(*local_8 + 0x2c))(local_8,&local_14);
          FUN_005c0590(local_14,param_2,param_4);
          goto LAB_005c7a2b;
        }
      }
      FUN_00407eb8(param_4,param_2);
      goto LAB_005c7a2b;
    }
  }
  FUN_00407eb8(param_4,param_2);
LAB_005c7a2b:
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005c7a55;
  puStack_28 = (undefined1 *)0x5c7a45;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  puStack_28 = (undefined1 *)0x5c7a4d;
  FUN_0040b140(&local_8);
  return;
}

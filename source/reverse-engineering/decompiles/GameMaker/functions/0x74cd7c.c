// rea decompile_all
// name: FUN_0074cd7c
// address: 0x74cd7c
// body: available
// range: 0x74cd7c-0x74ce52 inclusive
// range: 0x74ce5a-0x74ce75 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74cd96 (push 0x74ce76 followed by fs-segment stack chaining); handler 0x74ce76 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74ce2c (push 0x74ce53 followed by fs-segment stack chaining); handler 0x74ce53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074cd7c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0074ce76;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x20) == 0) {
    puStack_24 = (undefined1 *)0x74cdb2;
    uVar3 = FUN_0043f190(&PTR_FUN_00432364,1);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    puStack_24 = (undefined1 *)0x74cdca;
    iVar4 = FUN_0074ccd8(param_1,0x18,1);
    if (iVar4 != 0) {
      puStack_24 = (undefined1 *)0x74ce09;
      uVar3 = FUN_0074c858(iVar4);
      puStack_24 = (undefined1 *)0x74ce10;
      uVar3 = FUN_0074cbac(uVar3,0);
      puStack_24 = (undefined1 *)0x74ce1e;
      uVar3 = FUN_0074c604(&PTR_LAB_00745f50,1,uVar3);
      puStack_28 = &LAB_0074ce53;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x70))(*(int **)(param_1 + 0x20),uVar3);
      puVar1 = puStack_24;
      *in_FS_OFFSET = uStack_2c;
      puStack_24 = (undefined1 *)0x74ce5a;
      puStack_28 = (undefined1 *)0x74ce52;
      FUN_00405a7c(uVar3,uStack_2c,puVar1);
      return;
    }
    puStack_24 = (undefined1 *)0x74cde6;
    FUN_0040839c(&local_8,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),L".manifest");
    puStack_24 = (undefined1 *)0x74cdee;
    cVar2 = FUN_007365b8(local_8);
    puVar1 = puStack_18;
    if (cVar2 != '\0') {
      puStack_24 = (undefined1 *)0x74ce00;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x68))(*(int **)(param_1 + 0x20),local_8);
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0074ce7d;
  puStack_1c = (undefined1 *)0x74ce75;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}

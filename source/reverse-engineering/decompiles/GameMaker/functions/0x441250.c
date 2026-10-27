// rea decompile_all
// name: FUN_00441250
// address: 0x441250
// body: available
// range: 0x441250-0x441319 inclusive
// range: 0x441330-0x441336 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4412c2 (push 0x44131a followed by fs-segment stack chaining); handler 0x44131a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441250(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  code *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_18 = (undefined1 *)0x44126c;
  local_8 = param_1;
  cVar2 = FUN_00415a34(param_2,*(undefined4 *)(param_1 + 0x80));
  if ((cVar2 != '\0') && (in_stack_0000000c._2_2_ != 0)) {
    puStack_18 = (undefined1 *)0x441287;
    cVar2 = FUN_004435d8(local_8);
    if (cVar2 != '\n') {
      *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
      puStack_18 = (undefined1 *)0x441299;
      FUN_00443714(local_8);
      *(undefined1 *)(local_8 + 0x88) = 1;
      puStack_18 = (undefined1 *)0x4412a8;
      FUN_004410fc();
    }
    puStack_18 = (undefined1 *)0x4412b4;
    local_c = (int *)FUN_00405a4c(&LAB_00433630,1);
    puStack_1c = &LAB_0044131a;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00441780(local_8,&local_10,4);
    (**(code **)(*local_c + 4))(local_c,local_10);
    FUN_00441780(local_8,local_c[1],local_10);
    *(undefined1 *)(local_8 + 0x88) = 1;
    (*in_stack_0000000c)(in_stack_00000010,local_c);
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = &DAT_00441321;
    puStack_1c = (undefined1 *)0x441319;
    FUN_00405a7c(local_c,uStack_20,puVar1);
    return;
  }
  return;
}

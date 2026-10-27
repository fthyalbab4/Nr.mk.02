// rea decompile_all
// name: FUN_0062447c
// address: 0x62447c
// body: available
// range: 0x62447c-0x62455b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6244a4 (push 0x62455c followed by fs-segment stack chaining); handler 0x62455c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062447c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint *in_FS_OFFSET;
  uint in_stack_ffffffc4;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_2c = (undefined1 *)0x624499;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_30 = &LAB_0062455c;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&puStack_34;
  puStack_2c = &stack0xfffffffc;
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 != '\0') {
    FUN_0041733c(local_8,&local_c);
    iVar3 = FUN_00415770(local_c,L".gif");
    if (iVar3 == 0) {
      in_stack_ffffffc4 = 0x6244e8;
      cVar2 = FUN_00624090(param_1,local_8,param_7,param_6);
    }
    else {
      in_stack_ffffffc4 = (uint)param_6;
      cVar2 = FUN_00624328(param_1,local_8,param_3,in_stack_ffffffc4,param_7);
    }
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = param_5;
      *(undefined4 *)(param_1 + 0x10) = param_4;
      FUN_00624a08(param_1);
      FUN_00436ad0(0,0,0,local_1c,0);
      FUN_00623c28(param_1,0,0,0,0,local_1c);
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = in_stack_ffffffc4;
  puStack_34 = &LAB_00624563;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}

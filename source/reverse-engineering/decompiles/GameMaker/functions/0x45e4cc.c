// rea decompile_all
// name: FUN_0045e4cc
// address: 0x45e4cc
// body: available
// range: 0x45e4cc-0x45e5db inclusive
// range: 0x45e600-0x45e609 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e54e (push 0x45e5f9 followed by fs-segment stack chaining); handler 0x45e5f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e575 (push 0x45e5dc followed by fs-segment stack chaining); handler 0x45e5dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0045e4cc(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  bool local_5;

  if (param_2 == (int *)0x0) {
    local_5 = false;
  }
  else {
    local_5 = *param_2 == *param_1;
  }
  puStack_1c = (undefined1 *)0x45e4f7;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 == '\0') {
    puStack_1c = (undefined1 *)0x45e502;
    cVar2 = (**(code **)(*param_2 + 0x20))();
    if (cVar2 == '\0') {
      if (local_5 != false) {
        puStack_1c = (undefined1 *)0x45e540;
        puVar3 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
        puStack_20 = &LAB_0045e5f9;
        uStack_24 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_24;
        puStack_28 = (undefined1 *)0x45e55b;
        puStack_1c = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x48))(param_1,puVar3);
        puStack_28 = (undefined1 *)0x45e567;
        puVar4 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
        puStack_2c = &LAB_0045e5dc;
        uStack_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_30;
        puStack_28 = &stack0xfffffffc;
        (**(code **)(*param_2 + 0x48))(param_2,puVar4);
        iVar5 = (**(code **)*puVar3)();
        iVar6 = (**(code **)*puVar4)();
        if (extraout_EDX_00 == extraout_EDX && iVar6 == iVar5) {
          uVar7 = (**(code **)*puVar3)();
          FUN_00415890(puVar3[1],puVar4[1],uVar7);
        }
        puVar1 = puStack_28;
        *in_FS_OFFSET = uStack_30;
        puStack_28 = &LAB_0045e5e3;
        puStack_2c = (undefined1 *)0x45e5db;
        uVar8 = FUN_00405a7c(puVar4,uStack_30,puVar1);
        return uVar8;
      }
      goto LAB_0045e600;
    }
  }
  puStack_1c = (undefined1 *)0x45e50d;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 != '\0') {
    puStack_1c = (undefined1 *)0x45e518;
    cVar2 = (**(code **)(*param_2 + 0x20))();
    if (cVar2 != '\0') {
      local_5 = true;
      goto LAB_0045e600;
    }
  }
  local_5 = false;
LAB_0045e600:
  return (uint)local_5;
}

// rea decompile_all
// name: FUN_004bf95c
// address: 0x4bf95c
// body: available
// range: 0x4bf95c-0x4bfaa0 inclusive
// range: 0x4bfb17-0x4bfb37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bf9c3 (push 0x4bfb10 followed by fs-segment stack chaining); handler 0x4bfb10 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bfa3d (push 0x4bfaa1 followed by fs-segment stack chaining); handler 0x4bfaa1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf95c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  if ((((char)param_1[0x7b] != '\0') && (*(char *)((int)param_1 + 0x1eb) != '\0')) &&
     (param_1[0x72] != 0)) {
    puStack_24 = (undefined1 *)0x4bf9a0;
    (**(code **)(*(int *)param_1[0x72] + 0x2c))((int *)param_1[0x72],0);
  }
  puStack_28 = (undefined1 *)0x4bf9a6;
  puStack_24 = &stack0xfffffffc;
  cVar2 = FUN_004bf5c4();
  if (cVar2 != '\0') {
    puStack_28 = &LAB_004bfb10;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    if (param_1[0x6a] == 0) {
      iVar3 = param_1[0xd];
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0x1a8) == 0)) {
        puStack_30 = (undefined1 *)0x4bfa06;
        puStack_24 = &stack0xfffffffc;
        iVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
        param_1[0x6a] = iVar3;
      }
      else {
        param_1[0x6a] = *(int *)(iVar3 + 0x1a8);
        puStack_24 = &stack0xfffffffc;
      }
    }
    puStack_30 = (undefined1 *)0x4bfa23;
    (**(code **)(*param_1 + 0xa0))(param_1,param_3);
    puStack_30 = (undefined1 *)0x4bfa2f;
    uVar4 = FUN_00405fac(&PTR_LAB_0042e000,1);
    puStack_34 = &LAB_004bfaa1;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    puStack_30 = &stack0xfffffffc;
    FUN_004bf438(1);
    FUN_004bf438(2);
    FUN_004bf438(3);
    FUN_004bf438(4);
    FUN_004bf438(5);
    FUN_004bf438(6);
    FUN_004bf438(0);
    FUN_00406268(param_1);
    puVar1 = puStack_30;
    *in_FS_OFFSET = uStack_38;
    puStack_30 = &LAB_004bfaa8;
    puStack_34 = (undefined1 *)0x4bfaa0;
    FUN_00405fdc(uVar4,uStack_38,puVar1);
    return;
  }
  if ((*(char *)((int)param_1 + 0x5e) != '\0') && (*(char *)((int)param_1 + 0x1ea) != '\0')) {
    puStack_28 = (undefined1 *)0x4bfb32;
    puStack_24 = &stack0xfffffffc;
    FUN_004bf890();
  }
  return;
}

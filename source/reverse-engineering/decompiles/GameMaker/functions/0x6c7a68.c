// rea decompile_all
// name: FUN_006c7a68
// address: 0x6c7a68
// body: available
// range: 0x6c7a68-0x6c7bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c7a92 (push 0x6c7bb4 followed by fs-segment stack chaining); handler 0x6c7bb4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7a68(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar8;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_1c = 0;
  puStack_34 = (undefined1 *)0x6c7a81;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puVar1 = PTR_DAT_00782280;
  puStack_38 = &LAB_006c7bb4;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  if (*(char *)(*(int *)puVar1 + 0xa5) != '\0') {
    *(undefined4 *)(*(int *)puVar1 + 0x74) = 100000;
    puStack_34 = &stack0xfffffffc;
    iVar4 = FUN_00449834(*(undefined4 *)puVar1);
    if (-1 < iVar4 + -1) {
      iVar7 = 0;
      do {
        uVar5 = FUN_00449808(*(undefined4 *)puVar1,iVar7);
        cVar3 = FUN_00405c98(uVar5,&PTR_LAB_004e7a68);
        uVar8 = cVar3 == '\0';
        if (!(bool)uVar8) {
          piVar6 = (int *)FUN_00449808(*(undefined4 *)puVar1,iVar7);
          FUN_004ee6a0(piVar6,&local_1c);
          FUN_00408640(local_8,local_1c);
          if (!(bool)uVar8) {
            (**(code **)(*piVar6 + 0x104))(piVar6,600,local_8,&local_18,0);
            FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,&local_24);
            local_18 = local_18 + local_24;
            FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,&local_24);
            local_10 = local_10 + local_24;
            FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,&local_24);
            local_14 = local_20 + local_14 + 0x18;
            FUN_004fd580(*(undefined4 *)PTR_DAT_007827e4,&local_24);
            local_c = local_20 + local_c + 0x18;
            (**(code **)(*piVar6 + 0xf4))(piVar6,&local_18,local_8);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar2 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_006c7bbb;
  puStack_38 = (undefined1 *)0x6c7bab;
  thunk_FUN_00406e5c(&local_1c,uStack_3c,puVar2);
  puStack_38 = (undefined1 *)0x6c7bb3;
  thunk_FUN_00406e5c(&local_8);
  return;
}

// rea decompile_all
// name: FUN_0074cbf8
// address: 0x74cbf8
// body: available
// range: 0x74cbf8-0x74ccc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74cc19 (push 0x74ccc5 followed by fs-segment stack chaining); handler 0x74ccc5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074cbf8(int param_1,char param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0074ccc5;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = 0;
  local_14 = 0;
  iVar6 = *(int *)(param_1 + 8);
  local_c = param_3;
  local_5 = param_2;
  if (-1 < iVar6 + -1) {
    iVar4 = 0;
    puStack_28 = &stack0xfffffffc;
    do {
      FUN_0074cbac(param_1,iVar4);
      cVar2 = FUN_0074c9c0();
      if (cVar2 == local_5) {
        local_14 = FUN_0074cbac(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_14 != 0) {
    if (local_c == 0) {
      local_10 = local_14;
    }
    else {
      iVar4 = FUN_0074c858(local_14);
      iVar6 = *(int *)(iVar4 + 8);
      if (-1 < iVar6 + -1) {
        iVar5 = 0;
        uVar7 = true;
        do {
          uVar3 = FUN_0074cbac(iVar4,iVar5);
          FUN_0074c8b0(uVar3,&local_18);
          FUN_00408640(local_18,local_c);
          if ((bool)uVar7) {
            local_10 = FUN_0074cbac(iVar4,iVar5);
            break;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
          uVar7 = iVar6 == 0;
        } while (!(bool)uVar7);
      }
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0074cccc;
  puStack_2c = (undefined1 *)0x74ccc4;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar1);
  return;
}

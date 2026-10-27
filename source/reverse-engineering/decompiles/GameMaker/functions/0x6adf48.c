// rea decompile_all
// name: FUN_006adf48
// address: 0x6adf48
// body: available
// range: 0x6adf48-0x6adf8b inclusive
// range: 0x6adfe8-0x6ae178 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6adf68 (push 0x6ae179 followed by fs-segment stack chaining); handler 0x6ae179 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006adf48(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6adf5d;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_006ae179;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar1 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0xc);
  if (iVar1 < 0x15) {
    switch(iVar1) {
    case 6:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006aceb4(local_8,param_2,param_3);
      break;
    case 0xb:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006ade78(local_8,param_2,param_3);
      break;
    case 0xd:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006ad7a4(local_8,param_2,param_3);
      break;
    case 0x10:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006adcbc(local_8,param_2,param_3);
      break;
    case 0x11:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006add38(local_8,param_2,param_3);
      break;
    case 0x12:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006adb50(local_8,param_2,param_3);
      break;
    case 0x14:
      puStack_14 = &stack0xfffffffc;
      param_3 = FUN_006ade08(local_8,param_2,param_3);
      break;
    case -2:
      puStack_14 = &stack0xfffffffc;
      FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                   L"Unexpected end of code reached.");
      break;
    default:
      goto switchD_006adf85_caseD_ffffffff;
    }
  }
  else {
    if (iVar1 < 0x1c) {
      if (iVar1 == 0x1b) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad844(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      if (iVar1 - 0x15U < 3) {
        param_3 = param_3 + 1;
        puStack_14 = &stack0xfffffffc;
        goto LAB_006ae157;
      }
      if (iVar1 == 0x18) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006adad4(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      if (iVar1 == 0x19) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad74c(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      if (iVar1 == 0x1a) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad994(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
    }
    else {
      if (iVar1 == 0x1c) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad8f4(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      if (iVar1 == 0x1d) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad6ac(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      if (iVar1 == 0x1e) {
        puStack_14 = &stack0xfffffffc;
        param_3 = FUN_006ad6fc(local_8,param_2,param_3);
        goto LAB_006ae157;
      }
      puStack_14 = &stack0xfffffffc;
      if (iVar1 == 0x6c) goto LAB_006ae157;
    }
switchD_006adf85_caseD_ffffffff:
    puStack_14 = &stack0xfffffffc;
    param_3 = FUN_006ad5d0(local_8,param_2,param_3);
  }
LAB_006ae157:
  for (; puVar2 = puStack_14, *(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == 0x6c;
      param_3 = param_3 + 1) {
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006ae180;
  puStack_18 = (undefined1 *)0x6ae178;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}

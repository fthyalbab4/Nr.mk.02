// rea decompile_all
// name: FUN_006bd168
// address: 0x6bd168
// body: available
// range: 0x6bd168-0x6bd1a9 inclusive
// range: 0x6bd29e-0x6bd4d4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bd182 (push 0x6bd4d5 followed by fs-segment stack chaining); handler 0x6bd4d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bd168(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_006bd4d5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00407eb8(param_2,L"<unknown>");
  switch(param_1) {
  case 0:
    FUN_00407eb8(param_2,L"<no key>");
    break;
  case 1:
    FUN_00407eb8(param_2,L"<any key>");
    break;
  case 8:
    FUN_00407eb8(param_2,L"<Backspace>");
    break;
  case 9:
    FUN_00407eb8(param_2,L"<Tab>");
    break;
  case 0xd:
    FUN_00407eb8(param_2,L"<Enter>");
    break;
  case 0x10:
    FUN_00407eb8(param_2,L"<Shift>");
    break;
  case 0x11:
    FUN_00407eb8(param_2,L"<Ctrl>");
    break;
  case 0x12:
    FUN_00407eb8(param_2,L"<Alt>");
    break;
  case 0x1b:
    FUN_00407eb8(param_2,L"<Escape>");
    break;
  case 0x20:
    FUN_00407eb8(param_2,L"<Space>");
    break;
  case 0x21:
    FUN_00407eb8(param_2,L"<Page Up>");
    break;
  case 0x22:
    FUN_00407eb8(param_2,L"<Page Down>");
    break;
  case 0x23:
    FUN_00407eb8(param_2,L"<End>");
    break;
  case 0x24:
    FUN_00407eb8(param_2,L"<Home>");
    break;
  case 0x25:
    FUN_00407eb8(param_2,L"<Left>");
    break;
  case 0x26:
    FUN_00407eb8(param_2,L"<Up>");
    break;
  case 0x27:
    FUN_00407eb8(param_2,L"<Right>");
    break;
  case 0x28:
    FUN_00407eb8(param_2,L"<Down>");
    break;
  case 0x2d:
    FUN_00407eb8(param_2,L"<Insert>");
    break;
  case 0x2e:
    FUN_00407eb8(param_2,L"<Delete>");
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    FUN_00408034(&local_8,param_1);
    FUN_0040839c(param_2,local_8,L"-key");
    break;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    FUN_00408034(&local_c,param_1);
    FUN_0040839c(param_2,local_c,L"-key");
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
    FUN_0041666c(param_1 + -0x60,&local_10);
    FUN_0040839c(param_2,L"Keypad ",local_10);
    break;
  case 0x6a:
    FUN_00407eb8(param_2,L"Keypad *");
    break;
  case 0x6b:
    FUN_00407eb8(param_2,L"Keypad +");
    break;
  case 0x6d:
    FUN_00407eb8(param_2,L"Keypad -");
    break;
  case 0x6e:
    FUN_00407eb8(param_2,L"Keypad .");
    break;
  case 0x6f:
    FUN_00407eb8(param_2,L"Keypad /");
    break;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    FUN_0041666c(param_1 + -0x6f,&local_14);
    FUN_0040839c(param_2,&DAT_006bd82c,local_14);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006bd4dc;
  puStack_24 = (undefined1 *)0x6bd4d4;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}

// rea decompile_all
// name: FUN_00588150
// address: 0x588150
// body: available
// range: 0x588150-0x588173 inclusive
// range: 0x5881bc-0x5882ee inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00588150(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = *param_2;
  if (iVar1 < 0x19) {
    if (iVar1 == 0x18) {
      uVar2 = FUN_00587b90();
      return uVar2;
    }
    switch(iVar1) {
    case 6:
      uVar2 = FUN_0058661c();
      break;
    default:
      goto switchD_0058816d_caseD_7;
    case 0xd:
      uVar2 = FUN_005876f0();
      break;
    case 0x10:
      uVar2 = FUN_005877f8();
      break;
    case 0x11:
      uVar2 = FUN_00587908();
      break;
    case 0x12:
      uVar2 = FUN_00587a18();
      break;
    case 0x14:
      uVar2 = FUN_005875cc();
      break;
    case 0x15:
      uVar2 = 0xfffffffe;
      break;
    case 0x16:
      uVar2 = 0xfffffffd;
      break;
    case 0x17:
      uVar2 = 0xfffffffc;
    }
  }
  else {
    if (iVar1 < 0x1e) {
      if (iVar1 == 0x1d) {
        return 0;
      }
      if (iVar1 == 0x19) {
        iVar1 = FUN_00586fa0(param_1,*(undefined4 *)param_2[0xb]);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        return 0xfffffffe;
      }
      if (iVar1 == 0x1a) {
        uVar2 = FUN_00587f54();
        return uVar2;
      }
      if (iVar1 == 0x1b) {
        FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),param_2[0xc],&PTR_DAT_005882fc);
        return 0xffffffff;
      }
      if (iVar1 == 0x1c) {
        FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),param_2[0xc],
                     L"Default statement only allowed inside switch statement.");
        return 0xffffffff;
      }
    }
    else {
      if (iVar1 == 0x1e) {
        uVar2 = FUN_00588118();
        return uVar2;
      }
      if (iVar1 == 0x65) {
        uVar2 = FUN_00587074();
        return uVar2;
      }
      if (iVar1 == 1000) {
        uVar2 = FUN_005880cc();
        return uVar2;
      }
    }
switchD_0058816d_caseD_7:
    FUN_00610d7c(*(undefined4 *)(param_1 + 0xc),param_2[0xc],&PTR_DAT_005883f0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

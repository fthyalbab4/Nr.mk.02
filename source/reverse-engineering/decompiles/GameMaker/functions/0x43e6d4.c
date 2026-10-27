// rea decompile_all
// name: FUN_0043e6d4
// address: 0x43e6d4
// body: available
// range: 0x43e6d4-0x43e858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43e6f5 (push 0x43e876 followed by fs-segment stack chaining); handler 0x43e876 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43e70b (push 0x43e859 followed by fs-segment stack chaining); handler 0x43e859 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e6d4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  WCHAR WVar3;
  WCHAR WVar4;
  undefined4 uVar5;
  LPWSTR pWVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  LPWSTR local_10;
  int *local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0043e876;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x43e700;
  local_c = param_1;
  FUN_0043d354(param_1);
  puStack_30 = &LAB_0043e859;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x44))();
  local_10 = (LPWSTR)FUN_00407f44(param_2);
  cVar2 = FUN_0043e8f8(local_c);
  if (cVar2 == '\0') {
    for (; (ushort)(*local_10 + L'\xffff') < 0x20; local_10 = CharNextW(local_10)) {
    }
  }
  do {
    do {
      puVar1 = puStack_2c;
      WVar4 = *local_10;
      if (WVar4 == L'\0') {
        *in_FS_OFFSET = uStack_34;
        puStack_2c = &LAB_0043e860;
        puStack_30 = (undefined1 *)0x43e858;
        FUN_0043d41c(local_c,uStack_34,puVar1);
        return;
      }
      WVar3 = FUN_0043e8dc(local_c);
      pWVar6 = local_10;
      if (WVar4 == WVar3) {
        uVar5 = FUN_0043e8dc(local_c);
        FUN_00416164(&local_10,uVar5,&local_8);
      }
      else {
        while (((((char)local_c[4] == '\0' && (0x20 < (ushort)*local_10)) ||
                (((char)local_c[4] != '\0' && (*local_10 != L'\0')))) &&
               (WVar4 = FUN_0043e884(local_c), WVar4 != *local_10))) {
          local_10 = CharNextW(local_10);
        }
        uVar7 = (int)local_10 - (int)pWVar6;
        iVar8 = (int)uVar7 >> 1;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (uint)((uVar7 & 1) != 0);
        }
        FUN_00407ff4(&local_8,pWVar6,iVar8);
      }
      (**(code **)(*local_c + 0x38))(local_c,local_8);
      if ((char)local_c[4] == '\0') {
        for (; (ushort)(*local_10 + L'\xffff') < 0x20; local_10 = CharNextW(local_10)) {
        }
      }
      WVar4 = FUN_0043e884(local_c);
    } while (WVar4 != *local_10);
    pWVar6 = CharNextW(local_10);
    if (*pWVar6 == L'\0') {
      (**(code **)(*local_c + 0x38))(local_c,0);
    }
    do {
      local_10 = CharNextW(local_10);
      if ((char)local_c[4] != '\0') break;
    } while ((ushort)(*local_10 + L'\xffff') < 0x20);
  } while( true );
}

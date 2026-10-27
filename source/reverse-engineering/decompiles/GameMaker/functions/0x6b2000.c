// rea decompile_all
// name: FUN_006b2000
// address: 0x6b2000
// body: available
// range: 0x6b2000-0x6b2126 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b2014 (push 0x6b2127 followed by fs-segment stack chaining); handler 0x6b2127 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2000(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *in_FS_OFFSET;
  undefined4 *puStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006b2127;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_8);
  iVar2 = FUN_006aff9c(local_8,*(undefined4 *)(param_1 + 0x2f0));
  puStack_20 = (undefined4 *)0x6b2045;
  iVar3 = FUN_006b0028(local_8,*(undefined4 *)(param_1 + 0x2f0));
  if (iVar2 < iVar3) {
    puStack_20 = &local_8;
    FUN_004086a8(local_8,iVar2 + 1,iVar3 - iVar2);
    iVar2 = FUN_00655c2c(local_8);
    if (iVar2 < 0) {
      iVar2 = FUN_0062cc14(local_8);
      if (iVar2 < 0) {
        iVar2 = FUN_006f5a0c(local_8);
        if (iVar2 < 0) {
          iVar2 = FUN_006523ac(local_8);
          if (iVar2 < 0) {
            iVar2 = FUN_0064df24(local_8);
            if (iVar2 < 0) {
              iVar2 = FUN_0072292c(local_8);
              if (iVar2 < 0) {
                iVar2 = FUN_006fcd44(local_8);
                if (iVar2 < 0) {
                  iVar2 = FUN_006fa6f4(local_8);
                  if (iVar2 < 0) {
                    iVar2 = FUN_00693010(local_8);
                    if (-1 < iVar2) {
                      FUN_00693174();
                    }
                  }
                  else {
                    FUN_006fa858();
                  }
                }
                else {
                  FUN_006fcea8();
                }
              }
              else {
                FUN_00722a90();
              }
            }
            else {
              FUN_0064e08c();
            }
          }
          else {
            FUN_00652548();
          }
        }
        else {
          FUN_006f5b74();
        }
      }
      else {
        FUN_0062cde0();
      }
    }
    else {
      FUN_00655d90();
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = (int)puStack_20;
  puStack_18 = &LAB_006b212e;
  iStack_1c = 0x6b2126;
  thunk_FUN_00406e5c(&local_8,puStack_20,puVar1);
  return;
}

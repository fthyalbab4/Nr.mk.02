// rea decompile_all
// name: FUN_0051476c
// address: 0x51476c
// body: available
// range: 0x51476c-0x514856 inclusive
// range: 0x51485e-0x514860 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51479e (push 0x514857 followed by fs-segment stack chaining); handler 0x514857 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051476c(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  if (*(char *)(param_1 + 0x284) == '\0') {
    puStack_c = (undefined1 *)0x51478b;
    local_8 = param_1;
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      puStack_10 = &LAB_00514857;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x284) = 1;
      puStack_c = &stack0xfffffffc;
      cVar1 = FUN_00513c2c(*(undefined4 *)(local_8 + 0x288));
      if (cVar1 == '\0') {
        cVar1 = FUN_00513c2c(*(undefined4 *)(local_8 + 0x278));
        if (cVar1 == '\0') {
          FUN_00514298(*(undefined4 *)(local_8 + 0x288),0,0);
          FUN_00514298(*(undefined4 *)(local_8 + 0x278),1,0);
        }
        else {
          FUN_00514298(*(undefined4 *)(local_8 + 0x288),0,1);
          FUN_00514298(*(undefined4 *)(local_8 + 0x278),1,0);
        }
      }
      else {
        FUN_00514298(*(undefined4 *)(local_8 + 0x278),0,1);
        FUN_00514298(*(undefined4 *)(local_8 + 0x288),1,0);
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x284) = 0;
      return;
    }
  }
  return;
}

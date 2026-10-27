// rea decompile_all
// name: FUN_00616664
// address: 0x616664
// body: available
// range: 0x616664-0x6167c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x616695 (push 0x6167c3 followed by fs-segment stack chaining); handler 0x6167c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00616664(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];

  puStack_20 = (undefined1 *)0x61667c;
  FUN_00408ff8(local_c,&DAT_006119ac);
  puStack_20 = (undefined1 *)0x61668a;
  FUN_00408ff8(local_14,&DAT_0061318c);
  puStack_24 = &LAB_006167c3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)PTR_DAT_00689394 = 0xffffffff;
  *PTR_PTR_006892a0 = 0;
  if (*(char *)(param_1 + 8) == '\0') {
    puStack_20 = &stack0xfffffffc;
    cVar2 = FUN_00612f58(param_1,local_c);
    if ((cVar2 != '\0') && (cVar2 = FUN_0061365c(param_1,local_c,local_14), cVar2 != '\0')) {
      if (*(int *)(param_1 + 4) == 1) {
        cVar2 = FUN_00615b18(param_1,local_14,param_1 + 0x10);
      }
      else {
        cVar2 = FUN_00615b50(param_1,local_14,param_1 + 0x10);
      }
      if ((cVar2 != '\0') && (cVar2 = FUN_00615f40(param_1,param_1 + 0x10), cVar2 != '\0')) {
        if ((*(int *)(param_1 + 4) == 2) && (*(int *)(param_1 + 0x10) == 5)) {
          FUN_00409360(param_1 + 0x48,param_1 + 0x20,&DAT_00615f70);
          *(undefined4 *)(param_1 + 4) = 3;
        }
        *(undefined1 *)(param_1 + 8) = 1;
        *(int *)(param_1 + 0x60) = *(int *)PTR_DAT_00689394 + 1;
        *(undefined *)(param_1 + 100) = *PTR_PTR_006892a0;
        FUN_00409dfc(local_8,&DAT_00611974,1,0);
        FUN_00409dfc(local_10,&DAT_00613154,1,0);
      }
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_00610d7c(param_1,0,&PTR_DAT_006167e0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006167ca;
  puStack_24 = (undefined1 *)0x6167b4;
  FUN_004090d0(local_14,&DAT_0061318c,puVar1);
  puStack_24 = (undefined1 *)0x6167c2;
  FUN_004090d0(local_c,&DAT_006119ac);
  return;
}

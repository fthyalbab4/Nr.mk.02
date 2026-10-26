// rea decompile_all
// name: FUN_004876a0
// address: 0x4876a0
// body: available
// range: 0x4876a0-0x4877be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4876bd (push 0x4877bf followed by fs-segment stack chaining); handler 0x4877bf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004876a0(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004877bf;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (param_2 != *(char *)(param_1 + 0x1f)) {
    pcVar4 = (code *)0x0;
    if (param_2 == '\0') {
      FUN_004877d0(param_1,0);
      if (*(int *)(param_1 + 4) != 0) {
        FUN_0045ceb4(*(int *)(param_1 + 4),0);
      }
      DeleteDC(*(HDC *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else if (param_2 == '\x01') {
      puVar1 = &stack0xfffffffc;
      if (*(char *)(param_1 + 0x1f) == '\x02') goto LAB_004877a9;
      pcVar4 = (code *)&DAT_0040e058;
      puStack_1c = &stack0xfffffffc;
    }
    else {
      puStack_1c = &stack0xfffffffc;
      if (param_2 == '\x02') {
        puStack_1c = &stack0xfffffffc;
        if (*(int *)(param_1 + 4) != 0) {
          puStack_1c = &stack0xfffffffc;
          FUN_0045ceb4(*(int *)(param_1 + 4),0);
        }
        if (*(HDC *)(param_1 + 0x20) != (HDC)0x0) {
          DeleteDC(*(HDC *)(param_1 + 0x20));
        }
        pcVar4 = (code *)&DAT_0040e028;
      }
    }
    if (pcVar4 != (code *)0x0) {
      uVar2 = FUN_00487f44(param_1);
      piVar3 = (int *)FUN_00488080(param_1);
      local_8 = (**(code **)(*piVar3 + 0x18))(piVar3,uVar2);
      FUN_00407f44(*(undefined4 *)(local_8 + 0xc));
      FUN_00407f44(*(undefined4 *)(local_8 + 8));
      FUN_00407f44(*(undefined4 *)(local_8 + 4));
      uVar2 = (*pcVar4)();
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_0040b75c(PTR_PTR_007824fc,&local_c);
        FUN_00486fdc(local_c);
      }
      if (*(int *)(param_1 + 4) != 0) {
        FUN_0045ceb4(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20));
      }
    }
    *(char *)(param_1 + 0x1f) = param_2;
    puVar1 = puStack_1c;
  }
LAB_004877a9:
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004877c6;
  puStack_20 = (undefined1 *)0x4877be;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}

// rea decompile_all
// name: FUN_0061118c
// address: 0x61118c
// body: available
// range: 0x61118c-0x61133a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6111b5 (push 0x61133b followed by fs-segment stack chaining); handler 0x61133b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061118c(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined1 local_d;
  undefined4 local_c;
  int local_8;

  local_14 = 0;
  local_c = 0;
  puStack_20 = (undefined1 *)0x6111aa;
  local_d = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_0061133b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(**(int **)(DAT_00850ebc[0xe2] + 0x2a0) + 0x38))
            (*(int **)(DAT_00850ebc[0xe2] + 0x2a0),0);
  (**(code **)(**(int **)(DAT_00850ebc[0xe2] + 0x2a0) + 0x38))
            (*(int **)(DAT_00850ebc[0xe2] + 0x2a0),L"___________________________________________");
  FUN_004081e8(&local_c,0);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar4) {
    iVar2 = 1;
    do {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      if (*(short *)(iVar3 + -2 + iVar2 * 2) == 0xd) {
        (**(code **)(**(int **)(DAT_00850ebc[0xe2] + 0x2a0) + 0x38))
                  (*(int **)(DAT_00850ebc[0xe2] + 0x2a0),local_c);
        FUN_004081e8(&local_c,0);
      }
      else {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407488(&local_8,local_8);
        }
        if (*(short *)(iVar3 + -2 + iVar2 * 2) != 10) {
          FUN_00408310(&local_14,*(undefined2 *)(local_8 + -2 + iVar2 * 2));
          FUN_004085b8(&local_c,local_14);
        }
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(int **)(DAT_00850ebc[0xe2] + 0x2a0) + 0x38))
            (*(int **)(DAT_00850ebc[0xe2] + 0x2a0),local_c);
  FUN_004bcb48(DAT_00850ebc[0xe2],0xb6,0,100000);
  FUN_004bb578(DAT_00850ebc[0xe3],local_d);
  (**(code **)(*DAT_00850ebc + 0x110))();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00611342;
  puStack_24 = (undefined1 *)0x61132d;
  thunk_FUN_004072d8(&local_14,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x61133a;
  thunk_FUN_004072fc(&local_c,2);
  return;
}

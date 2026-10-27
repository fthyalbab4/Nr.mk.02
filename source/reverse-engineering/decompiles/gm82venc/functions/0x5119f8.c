// rea decompile_all
// name: FUN_005119f8
// address: 0x5119f8
// body: available
// range: 0x5119f8-0x511b50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x511a1d (push 0x511b51 followed by fs-segment stack chaining); handler 0x511b51 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005119f8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x511a12;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1c = &LAB_00511b51;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (DAT_0068fda8 == '\0') {
    puStack_18 = &stack0xfffffffc;
    if (DAT_006840ac == 0) {
      puStack_18 = &stack0xfffffffc;
      FUN_0051162c(DAT_0068fda4,1);
    }
    cVar2 = FUN_00416b0c(local_8);
    if (cVar2 != '\0') {
      iVar3 = FUN_0051150c(param_2);
      if (*(int *)(DAT_0068fda0 + 4 + iVar3 * 0x14) != 3) {
        FUN_00408420(&local_c,local_8);
        uStack_20 = 0x511a8d;
        uStack_20 = FUN_0040b268(DAT_0068fda0 + 8 + iVar3 * 0x14);
        FUN_00407fb8(local_c);
        uVar4 = (**(code **)(*DAT_006840b0 + 0x38))();
        if ((uVar4 & 0x80000000) == 0) {
          (**(code **)(**(int **)(DAT_0068fda0 + 8 + iVar3 * 0x14) + 0x4c))();
          (**(code **)(**(int **)(DAT_0068fda0 + 8 + iVar3 * 0x14) + 0x74))();
        }
        else {
          FUN_0040b268(DAT_0068fda0 + 8 + iVar3 * 0x14);
          FUN_0040b268(DAT_0068fda0 + 0xc + iVar3 * 0x14);
          *(undefined4 *)(DAT_0068fda0 + 4 + iVar3 * 0x14) = 3;
        }
      }
      if (*(int *)(DAT_0068fda0 + 4 + iVar3 * 0x14) == 3) {
        FUN_00408194(DAT_0068fda0 + 0x10 + iVar3 * 0x14,local_8);
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00511b58;
  puStack_1c = (undefined1 *)0x511b48;
  FUN_00407dd0(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x511b50;
  thunk_FUN_004072d8(&local_8);
  return;
}

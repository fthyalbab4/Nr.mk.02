// rea decompile_all
// name: FUN_00530618
// address: 0x530618
// body: available
// range: 0x530618-0x53074f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x530632 (push 0x530750 followed by fs-segment stack chaining); handler 0x530750 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00530618(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  short *local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_c = (short *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00530750;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  iVar4 = 0;
  local_8 = 1;
  iVar3 = 1;
  do {
    FUN_004ee6a0(param_1,&local_18);
    iVar2 = FUN_00408238(local_18);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x2a0) = local_8 * iVar4;
      iVar3 = *(int *)(param_1 + 0x2a4);
      if (iVar3 < *(int *)(param_1 + 0x2a8)) {
        if (local_8 * iVar4 < iVar3) {
          *(int *)(param_1 + 0x2a0) = iVar3;
          *(undefined1 *)(param_1 + 0x2ac) = 1;
        }
        if (*(int *)(param_1 + 0x2a8) < *(int *)(param_1 + 0x2a0)) {
          *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a8);
          *(undefined1 *)(param_1 + 0x2ac) = 1;
        }
      }
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        FUN_004ee858(param_1,*(undefined4 *)(param_1 + 0x2b0));
      }
      else {
        FUN_004ee858(param_1,*(undefined4 *)(param_1 + 0x2b4));
      }
      puVar1 = puStack_28;
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_00530757;
      puStack_2c = (undefined1 *)0x53074f;
      thunk_FUN_00406e80(&local_18,4,puVar1);
      return;
    }
    if (iVar3 == 1) {
      FUN_004ee6a0(param_1,&local_c);
      if (*local_c != 0x2d) goto LAB_0053066f;
      local_8 = -1;
    }
    else {
LAB_0053066f:
      FUN_004ee6a0(param_1,&local_10);
      if ((ushort)(*(short *)(local_10 + -2 + iVar3 * 2) - 0x30U) < 10) {
        FUN_004ee6a0(param_1,&local_14);
        iVar4 = (uint)*(ushort *)(local_14 + -2 + iVar3 * 2) + iVar4 * 10 + -0x30;
      }
      else {
        *(undefined1 *)(param_1 + 0x2ac) = 1;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

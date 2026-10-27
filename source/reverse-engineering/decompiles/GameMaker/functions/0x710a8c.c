// rea decompile_all
// name: FUN_00710a8c
// address: 0x710a8c
// body: available
// range: 0x710a8c-0x710ae5 inclusive
// range: 0x710b0e-0x710d4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x710aac (push 0x710d4c followed by fs-segment stack chaining); handler 0x710d4c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00710a8c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  local_10 = 4;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_00710d4c;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar1 = &stack0xfffffffc;
  if (-1 < *(int *)(param_1 + 0x44)) {
    uVar2 = FUN_0070f5d0(*(int *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    puVar1 = local_20;
  }
  local_20 = puVar1;
  iVar5 = *(int *)(param_1 + 0x20);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      switch(*(undefined4 *)(param_1 + 0x24 + iVar4 * 4)) {
      case 5:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f50c();
          FUN_0041666c(uVar2,&local_8);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_8);
        }
        break;
      case 6:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f528();
          FUN_0041666c(uVar2,&local_c);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_c);
        }
        break;
      case 7:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f544();
          FUN_0041666c(uVar2,&local_10);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_10);
        }
        break;
      case 8:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f560();
          FUN_0041666c(uVar2,&stack0xffffffec);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,unaff_EBX);
        }
        break;
      case 9:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f57c();
          FUN_0041666c(uVar2,&stack0xffffffe8);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,unaff_ESI);
        }
        break;
      case 10:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f5d0();
          FUN_0041666c(uVar2,&stack0xffffffe4);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,unaff_EDI);
        }
        break;
      case 0xb:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f5ec();
          FUN_0041666c(uVar2,&local_20);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_20);
        }
        break;
      case 0xc:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f598();
          FUN_0041666c(uVar2,&local_24);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_24);
        }
        break;
      case 0xe:
        iVar3 = FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
        if (-1 < iVar3) {
          FUN_00710a04(*(undefined4 *)(param_1 + 0x4c + iVar4 * 4),0xffffffff);
          uVar2 = FUN_0070f5b4();
          FUN_0041666c(uVar2,&local_28);
          FUN_00407eb8(param_1 + 0x4c + iVar4 * 4,local_28);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00710d53;
  local_24 = (undefined1 *)0x710d4b;
  thunk_FUN_00406e80(&local_28,9,puVar1);
  return;
}

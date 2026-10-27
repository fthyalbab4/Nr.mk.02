// rea decompile_all
// name: FUN_00443714
// address: 0x443714
// body: available
// range: 0x443714-0x44374a inclusive
// range: 0x4437a8-0x4438b8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44372d (push 0x4438b9 followed by fs-segment stack chaining); handler 0x4438b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443714(undefined4 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_004438b9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar2 = FUN_004435d8(param_1);
  switch(uVar2 & 0x7f) {
  case 1:
    FUN_00443654();
    break;
  case 2:
    FUN_00443ec8(local_8,1);
    break;
  case 3:
    FUN_00443ec8(local_8,2);
    break;
  case 4:
    FUN_00443ec8(local_8,4);
    break;
  case 5:
    FUN_00443ec8(local_8,10);
    break;
  case 6:
  case 7:
    FUN_00443320(local_8,&local_c);
    break;
  case 10:
    FUN_00443680(1);
    break;
  case 0xb:
    FUN_0044360c(local_8);
    break;
  case 0xc:
    FUN_00443680(1);
    break;
  case 0xe:
    FUN_004436b0();
    break;
  case 0xf:
    FUN_00443ec8(local_8,4);
    break;
  case 0x10:
    FUN_00443ec8(local_8,8);
    break;
  case 0x11:
    FUN_00443ec8(local_8,8);
    break;
  case 0x12:
    FUN_00443680(2);
    break;
  case 0x13:
    FUN_00443ec8(local_8,8);
    break;
  case 0x14:
    FUN_00443680(1);
    break;
  case 0x15:
    FUN_00443ec8(local_8,8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004438c0;
  puStack_14 = (undefined1 *)0x4438b8;
  thunk_FUN_00406e5c(&local_c,uStack_18,puVar1);
  return;
}

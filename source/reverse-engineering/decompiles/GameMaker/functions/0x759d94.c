// rea decompile_all
// name: FUN_00759d94
// address: 0x759d94
// body: available
// range: 0x759d94-0x759f71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x759dcf (push 0x759f72 followed by fs-segment stack chaining); handler 0x759f72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00759d94(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_ESI;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  byte local_11c [256];
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_138 = &stack0xfffffffc;
  local_12c = 0;
  local_120 = 0;
  local_124 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  puStack_13c = &LAB_00759f72;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  local_1c = param_2;
  FUN_00407eb8(param_2,0);
  bVar1 = *param_1;
  if (bVar1 == 1) {
    FUN_00407140(&local_124,param_1 + 1,0);
    uStack_140 = 0x759e0f;
    FUN_00759cd4(local_124,&local_120);
    local_128 = local_120;
    uStack_140 = 0x759e29;
    FUN_00733be8(local_120,&local_10);
    uStack_140 = 0x759e34;
    FUN_00408130(&local_8,local_10);
    uStack_140 = 0x759e3f;
    FUN_00407eb8(local_1c,local_8);
  }
  else {
    if (bVar1 == 2) {
      param_1 = param_1 + 1;
      local_11c[0] = 0x40;
    }
    uVar3 = (uint)(bVar1 == 2);
    uVar4 = 0;
    bVar1 = 0;
    do {
      uVar2 = uVar4 & 3;
      if (uVar2 == 0) {
        bVar1 = *param_1 & 0x3f;
      }
      else if (uVar2 == 1) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = (bVar1 >> 6) + (*param_1 & 0xf) * '\x04';
      }
      else if (uVar2 == 2) {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        bVar1 = (bVar1 >> 4) + (*param_1 & 3) * '\x10';
      }
      else if (uVar2 == 3) {
        bVar1 = *param_1 >> 2;
        param_1 = param_1 + 1;
      }
      uVar2 = (uint)bVar1;
      if (uVar2 < 0xb) {
        if (uVar2 == 0) break;
        if (uVar2 - 1 < 10) {
          bVar1 = bVar1 + 0x2f;
        }
      }
      else if (uVar2 - 0xb < 0x1a) {
        bVar1 = bVar1 + 0x36;
      }
      else if (uVar2 - 0x25 < 0x1a) {
        bVar1 = bVar1 + 0x3c;
      }
      else if (uVar2 - 0x25 == 0x1a) {
        bVar1 = 0x5f;
      }
      local_11c[uVar3] = bVar1;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
    } while ((int)uVar3 < 0xff);
    local_11c[uVar3] = 0;
    FUN_004071c4(&local_12c,local_11c,0x100,0);
    FUN_00733be8(local_12c,&local_14);
    FUN_00408130(&local_c,local_14);
    FUN_00407eb8(local_1c,local_c);
  }
  *in_FS_OFFSET = puStack_13c;
  puStack_138 = (undefined1 *)0x759f47;
  FUN_00406e5c(&local_12c,puStack_13c,unaff_ESI);
  puStack_138 = (undefined1 *)0x759f57;
  FUN_00406e80(&local_124,2);
  puStack_138 = (undefined1 *)0x759f64;
  FUN_00407a90(&local_14,2);
  puStack_138 = (undefined1 *)0x759f71;
  thunk_FUN_00406e80(&local_c,2);
  return;
}

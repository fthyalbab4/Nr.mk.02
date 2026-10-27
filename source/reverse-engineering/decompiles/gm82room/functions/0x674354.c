// rea decompile_all
// name: FUN_00674354
// address: 0x674354
// body: available
// range: 0x674354-0x67479e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x674368 (push 0x67479f followed by fs-segment stack chaining); handler 0x67479f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00674354(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined2 *local_14;
  undefined2 *local_10;
  undefined2 *local_c;
  undefined2 *local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined2 *)0x0;
  local_c = (undefined2 *)0x0;
  local_10 = (undefined2 *)0x0;
  local_14 = (undefined2 *)0x0;
  puStack_1c = &LAB_0067479f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  bVar1 = _DAT_0068f0f0 == 0;
  _DAT_0068f0f0 = _DAT_0068f0f0 + -1;
  if (bVar1) {
    FUN_00404790();
    _DAT_0068f0d4 = 0x2f;
    _DAT_0068f0d6 = 0x5c;
    _DAT_0068f0d8 = 0x3b;
    _DAT_0068f0da = 0x3a;
    _DAT_0068f0dc = 0x2e;
    FUN_00409e08(&local_8,&DAT_00412e00);
    FUN_00409dfc(&local_8,&DAT_00412e00,1,0x24);
    *local_8 = 0;
    local_8[1] = 1;
    local_8[2] = 2;
    local_8[3] = 3;
    local_8[4] = 4;
    local_8[5] = 5;
    local_8[6] = 6;
    local_8[7] = 7;
    local_8[8] = 8;
    local_8[9] = 9;
    local_8[10] = 10;
    local_8[0xb] = 0xb;
    local_8[0xc] = 0xc;
    local_8[0xd] = 0xd;
    local_8[0xe] = 0xe;
    local_8[0xf] = 0xf;
    local_8[0x10] = 0x10;
    local_8[0x11] = 0x11;
    local_8[0x12] = 0x12;
    local_8[0x13] = 0x13;
    local_8[0x14] = 0x14;
    local_8[0x15] = 0x15;
    local_8[0x16] = 0x16;
    local_8[0x17] = 0x17;
    local_8[0x18] = 0x18;
    local_8[0x19] = 0x19;
    local_8[0x1a] = 0x1a;
    local_8[0x1b] = 0x1b;
    local_8[0x1c] = 0x1c;
    local_8[0x1d] = 0x1d;
    local_8[0x1e] = 0x1e;
    local_8[0x1f] = 0x1f;
    local_8[0x20] = 0x22;
    local_8[0x21] = 0x3c;
    local_8[0x22] = 0x3e;
    local_8[0x23] = 0x7c;
    FUN_00409e44(&DAT_0068f0e0,local_8,&DAT_00412e00);
    FUN_00409e08(&local_c,&DAT_00412e00);
    FUN_00409dfc(&local_c,&DAT_00412e00,1,0x29);
    *local_c = 0;
    local_c[1] = 1;
    local_c[2] = 2;
    local_c[3] = 3;
    local_c[4] = 4;
    local_c[5] = 5;
    local_c[6] = 6;
    local_c[7] = 7;
    local_c[8] = 8;
    local_c[9] = 9;
    local_c[10] = 10;
    local_c[0xb] = 0xb;
    local_c[0xc] = 0xc;
    local_c[0xd] = 0xd;
    local_c[0xe] = 0xe;
    local_c[0xf] = 0xf;
    local_c[0x10] = 0x10;
    local_c[0x11] = 0x11;
    local_c[0x12] = 0x12;
    local_c[0x13] = 0x13;
    local_c[0x14] = 0x14;
    local_c[0x15] = 0x15;
    local_c[0x16] = 0x16;
    local_c[0x17] = 0x17;
    local_c[0x18] = 0x18;
    local_c[0x19] = 0x19;
    local_c[0x1a] = 0x1a;
    local_c[0x1b] = 0x1b;
    local_c[0x1c] = 0x1c;
    local_c[0x1d] = 0x1d;
    local_c[0x1e] = 0x1e;
    local_c[0x1f] = 0x1f;
    local_c[0x20] = 0x22;
    local_c[0x21] = 0x2a;
    local_c[0x22] = 0x2f;
    local_c[0x23] = 0x3a;
    local_c[0x24] = 0x3c;
    local_c[0x25] = 0x3e;
    local_c[0x26] = 0x3f;
    local_c[0x27] = 0x5c;
    local_c[0x28] = 0x7c;
    FUN_00409e44(&DAT_0068f0e4,local_c,&DAT_00412e00);
    FUN_00409e08(&local_10,&DAT_00412e00);
    FUN_00409dfc(&local_10,&DAT_00412e00,1,5);
    *local_10 = 0x2a;
    local_10[1] = 0x2f;
    local_10[2] = 0x3a;
    local_10[3] = 0x3f;
    local_10[4] = 0x5c;
    FUN_00409e44(&DAT_0068f0e8,local_10,&DAT_00412e00);
    FUN_00409e08(&local_14,&DAT_00412e00);
    FUN_00409dfc(&local_14,&DAT_00412e00,1,2);
    *local_14 = 0x2a;
    local_14[1] = 0x3f;
    FUN_00409e44(&DAT_0068f0ec,local_14,&DAT_00412e00);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006747a6;
  puStack_1c = (undefined1 *)0x67479e;
  FUN_00409120(&local_14,&DAT_00412e00,4);
  return;
}

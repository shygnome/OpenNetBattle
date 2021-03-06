#version 120

uniform sampler2D texture;
uniform float progress;
uniform int cols;
uniform int rows;

float rand(vec2 co) {
    return fract(sin(dot(co.xy, vec2(12.9898, 78.233))) * 43758.5453);
}

void main() {
    vec2 p = gl_TexCoord[0].xy;
    vec2 size = vec2(cols, rows);
    vec4 color = texture2D(texture, p.xy);
    float r = rand(floor(vec2(size) * color.xy));
    float m = smoothstep(0.0, 0.0, r - (progress * (1.0)));
    gl_FragColor = mix(color, vec4(0.0,0.0,0.0,1.0), m);
}
